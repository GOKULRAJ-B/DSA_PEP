#include<iostream>
using namespace std;

bool search(int arr[],int key,int size){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true; 
    }
    return search(arr+1,key,size-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<(search(arr,8,5)?"Found":"Not found");
}