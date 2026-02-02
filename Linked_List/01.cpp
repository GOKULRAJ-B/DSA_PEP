#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtBegining(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    head = node;
    head->next = temp;
}
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = node;

}

void listPrint(Node* &head){
    if(head == NULL) return;

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtBegining(head,5);
    insertAtBegining(head,6);
    listPrint(head);
}