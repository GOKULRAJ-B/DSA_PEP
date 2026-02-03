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
    node->next = head;
    head = node;
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

void insertAtN(Node* &head, int pos, int val){
    if(head == NULL && pos!=0) return;

    Node* newnode = new Node(val);

    Node* temp = head;
    if(pos == 0){
        insertAtBegining(head,val);
        return;
    }
    int index = 0;
    while(temp->next!=NULL){
        if(index+1 == pos){
            break;
        }
        temp = temp->next;
        index++;
    }
    Node* prev = temp->next;
    temp->next = newnode;
    newnode->next = prev;

}

void deleteLastNode(Node* &head){
    if(head==NULL) return;
    if(head->next == NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp = temp->next;
    delete temp;
}

void deleteAtBegining(Node* &head){
    if(head==NULL) return;
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head->next;
    delete head;
    head = temp;
}

int main(){
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtBegining(head,5);
    insertAtBegining(head,6);
    insertAtBegining(head,7);
    insertAtN(head, 0, 15);
    listPrint(head);
    //deleteLastNode(head);
    deleteAtBegining(head);
    cout<<endl;
    listPrint(head);
}