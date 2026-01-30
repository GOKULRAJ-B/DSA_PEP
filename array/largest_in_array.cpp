//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1


//second largest

#include <iostream>
using namespace std;
int main(){
    int arr[5]={6,2,1,4,5};
    int lar = arr[0];
    int second;
    int flag = 0;
    for(int i : arr){
        if((i<lar) & (flag==0)){
            second = i;
            flag=1;
        }
        else if((i<lar) & (i>second)){
            second = i;
        }
        else{
            second = lar;
            lar = i;
        }
    }
    cout<<second;
}