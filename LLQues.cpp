#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

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

Node* removeDuplicatesFromSorted(Node* head){
    if(head == NULL) return NULL;

    Node* temp = head;

    while(temp != NULL){
        if(temp->next != NULL && temp->data == temp->next->data){
            Node*del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }else{
            temp = temp->next;
        }
    }
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

int main(){
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,3);
    removeDuplicatesFromSorted(head);
    display(head);


}