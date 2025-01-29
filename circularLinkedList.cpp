#include<iostream>
using namespace std;


class Node{
    public:
    Node * prev;
    Node * next;
    int data;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node * n = new Node(val);

    if(head == NULL){
        head = n;
        head->next = n;
        return;
    }

    Node * temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;

}

void insertAtHead(Node* &head, int val){
    Node * n = new Node(val);

    if(head == NULL){
        head = n;
        head->next = head;
        return;
    }

    Node * temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;

    head = n;
}

void display(Node* &head){
    Node * temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    cout << "Head" << endl;
}

Node* checkLoop(Node* head){
    if(head == NULL) return NULL;
    Node * slow = head;
    Node * fast = head;

    while(slow != NULL && fast != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            cout << "Loop found";
            return slow;
        };
    }
    cout << "Loop not found";
    return NULL;
    // int flag = 0;

    // do{
    //     slow->next = head->next;
    //     fast->next = head->next->next;
    //     if(slow != NULL || fast != NULL){
    //         flag = 1;
    //         break;
    //     }
    // }while(slow == fast);

    // if(flag = 0){
    //     cout << "Loop Found" << endl;
    // } else cout << "No Loop Found" <<endl;

    // return head;
}

Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;

    Node* intersection = checkLoop(head);

    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    cout << slow->data;


    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL) return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

void delAtHead(Node* &head){
    Node * del = head;
    Node * temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete del;
}



int main(){
    Node* head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 10);
    // display(head);
    getStartingNode(head);
    // delAtHead(head);
    // cout << endl;
    // display(head);
}
//delete at nth position;