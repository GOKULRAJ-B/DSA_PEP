#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtEnd(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insertAtBegining(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertAtN(Node* &head, Node* &tail, int pos, int val){
    if(pos==0){
        insertAtBegining(head,tail,val);
        return;
    }
    Node* newnode = new Node(val);
    Node* temp = head;
    int index = 0;
    while(temp->next!=NULL){
        if(index+1 == pos){
            break;
        }
        temp = temp->next;
        index++;
    }
    if(temp->next == NULL){
        newnode->prev = temp;
        temp->next = newnode;
        tail = newnode;
    }
    else{
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
}

void printList(Node* &head, Node* &tail){
    Node* temp = head;
    //print from the head
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    //print from the tail
    Node* tem = tail;
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem = tem->prev;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtEnd(head,tail,1);
    insertAtEnd(head,tail,2);
    insertAtEnd(head,tail,3);
    insertAtEnd(head,tail,4);
    //insertAtBegining(head,tail,1);
    //insertAtBegining(head,tail,2);
    //insertAtBegining(head,tail,3);
    //insertAtBegining(head,tail,4);
    insertAtN(head,tail,2,15);
    printList(head,tail);
}