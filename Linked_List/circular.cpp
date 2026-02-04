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

void deleteAtend(Node* &head){
    if(head==NULL) return;
    Node* temp = head;
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    while(temp->next->next!=head){
        temp = temp->next;
    }
    Node* toDel = temp->next->next;
    temp->next = head;
    delete toDel;
}

int countOfEven(Node* head){
    if(head == NULL){
        return 0;
    }
    int count=0;
    Node* temp = head;
    if(temp->data % 2 == 0) count++;
    temp = temp->next;
    while(temp!=head){
        if(temp->data % 2 == 0) count++;
        temp = temp->next;
    }
    return count;
}



void deleteAtBegining(Node* &head){
    if(head==NULL) return;

    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    Node* toDel = head;
    temp->next = head->next;
    head = head->next;
    delete toDel;
}

void deleteAtN(Node* &head, int pos){
    if(head==NULL) return;
    if(pos == 1){
        deleteAtBegining(head);
        return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp->next->next!=head; i++){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;

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
    insertAtend(head,1);
    insertAtend(head,2);
    insertAtend(head,6);
    insertAtend(head,4);
    //insertAtBegining(head,1);
    //insertAtBegining(head,2);
    //insertAtBegining(head,3);
    //insertAtBegining(head,4);
    //printList(head);
    //deleteAtBegining(head);
    //cout<<endl;
    printList(head);
    cout<<endl;
    //deleteAtend(head);
    //deleteAtN(head, 3);
    //printList(head);
    cout<<countOfEven(head);
}