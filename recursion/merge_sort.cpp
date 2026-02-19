#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = (start+end)/2;
    int length1 = mid - start + 1;
    int length2 = end - mid;

    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    int k = start;

    for(int i=0;i<length1;i++){
        arr1[i] = arr[k++];
    }

    k = mid+1;
    for(int i=0; i<length2; i++){
        arr2[i] = arr[k++];
    }

    int i = 0;
    int j = 0;

    k = start;
    while(i<length1 && j<length2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }
    while(i<length1){
        arr[k++] = arr1[i++];
    }
    while(j<length2){
        arr[k++] = arr2[j++];
    }
    delete []arr1;
    delete []arr2;
}



void mergeSort(int *arr, int start, int end){
    if(start>=end) return;

    int mid = (start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);

    
}




int main(){
    int arr[7] = {2,1,4,8,9,11,24};
    mergeSort(arr,0,7-1);
    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
