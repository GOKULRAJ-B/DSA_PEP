#include<iostream>
using namespace std;

class MyStack{
    public:
    int *arr;
    int top;
    int size;

    MyStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top<0){
            cout<<"Stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top<0) return true;
        return false;
    }
};

int main(){
    MyStack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    //st.push(6);
    //cout<<st.isEmpty()<<endl;
    st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    //st.pop();
    // cout<<st.isEmpty()<<endl;
    cout<<st.peek()<<endl;

}
