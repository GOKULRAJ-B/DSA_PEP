#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
    if(start>end) return false;
    int mid = (start+end)/2;
    if(arr[mid]==key) return true;

    if(arr[mid]>key){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    return binarySearch(arr, start, end, key);
}
int main(){
    int arr[10] = {3,5,7,8,9,12,14,17,20,22};
    cout<<(binarySearch(arr,0,9,23)?"Found":"Not Found");
}