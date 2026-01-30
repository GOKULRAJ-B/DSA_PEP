#include<iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};
    int sum = 0;
    for(int i:arr){
        sum = sum+i;
    }
    cout<<sum;
//https://leetcode.com/problems/running-sum-of-1d-array/description/
}