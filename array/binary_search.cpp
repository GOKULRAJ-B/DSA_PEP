#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={2,5,6,9,10};
    int result = binarySearch(arr,9,5);
    if(result>-1){
        cout<<"Key found at: "<<result;
    }
    else{
        cout<<"Key not found";
    }
}