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

void deleteAtN(Node* &head, int pos){
    if(head==NULL) return;
    Node* temp = head;
    if(pos == 1){
        Node* toDel = head;
        head = head->next;
        delete toDel;
        return;
    }
    for(int i=1; i<pos-1 && temp->next!=NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL) return;
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

bool searchRecursiveKey(Node* head, int key){
    if(head->data==key){
        return true;
    }
    if(head->next==NULL || head==NULL){
        return false;
    }
    return searchRecursiveKey(head->next,key);

}

int main(){
    Node* head = NULL;
    //insertAtEnd(head,1);
    insertAtBegining(head,5);
    insertAtBegining(head,6);
    insertAtBegining(head,7);
    //insertAtN(head, 0, 15);
    listPrint(head);
    //deleteLastNode(head);
    //deleteAtBegining(head);
    //deleteAtN(head,1);
    cout<<endl;
    //listPrint(head);
    cout<<((searchRecursiveKey(head,55))?"Found":"Not Found");
}