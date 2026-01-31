#include<iostream>
using namespace std;

int findSum(int arr[],int size){
    if(size==0){
        return 0;
    }
    return arr[size-1]+findSum(arr,size-1);
}

int main(){
    int arr[3] = {10,20,30};
    cout<<findSum(arr,3);
}