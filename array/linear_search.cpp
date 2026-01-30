#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    int index =-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return index+1;
        }
        index++;
    }
    return -1;
}
int main(){
    int arr[5]={1,4,2,3,5};
    int key=4;
    int result = linearSearch(arr,5,key);
    if(result!=-1){
        cout<<"Found at: "<<result;
    }
    else{
        cout<<"Not Found";
    }
}