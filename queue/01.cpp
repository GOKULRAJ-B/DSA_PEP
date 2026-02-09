#include<iostream>
using namespace std;

class MyQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enQueue(int value){
        if(rear == size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        if(front==-1){
            front = 0;
        }
        arr[++rear] = value;
    }

    void deQueue(){
        if(front>rear){
            cout<<"Queue underflow"<<endl;
            return;
        }
        front++;
    }

    int getAtFront(){
        if(front == -1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool queueEmpty(){
        if(front!=-1) return false;
        return true;
    }

};

int main(){
    MyQueue q(3);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    cout<<q.getAtFront()<<endl;
    q.deQueue();
    cout<<q.getAtFront();
}