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

void insertAtend(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        newnode->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void insertAtBegining(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        newnode->next = head;
        return;
    }
    newnode->next = head;
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newnode;
    head = newnode;
}

void printList(Node* &head){
    if(head==NULL) return;
    Node* temp = head->next;
    cout<<head->data<<" ";
    while(temp!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    //insertAtend(head,1);
    //insertAtend(head,2);
    //insertAtend(head,3);
    insertAtBegining(head,1);
    insertAtBegining(head,2);
    insertAtBegining(head,3);
    insertAtBegining(head,4);
    printList(head);
}