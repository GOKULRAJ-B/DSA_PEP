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

class MyStack{
    public:
    Node* top;

    MyStack(){
        top = NULL;
    }

    void push(int value){
        Node* newnode = new Node(value);
        if(top==NULL){
            top = newnode;
            return;
        }
        newnode->next = top;
        top = newnode;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty";
        }
        return top->data;
    }

    bool isEmpty(){
        if(top==NULL) return true;
        return false;
    }
};

int main(){
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    //cout<<st.peek()<<endl;
    st.pop();
    //cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
}