#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node * n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;

}

void insertAtHead(Node* &head, int val){
    Node * n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node * head){
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp-> data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(Node * head, int key){
    Node * temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(Node * &head, int key){
    Node * temp = head;
    if(head == NULL) return;
    while(temp->next->data != key){
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

void delAtHead(Node* &head){
    Node * temp = head;
    head = head->next;
    delete temp;
}

//Node*
Node* reversal(Node* head){
    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

Node* kReversal(Node* &head, int k){
    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;
    int count = 0;

    while(count < k){
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
        count++;
    }
    kReversal(curr, k);
}

int main(){
    Node * head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    display(head);
    Node * n = reversal(head);
    display(n);
}