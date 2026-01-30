
//https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k>n){
            k=n;
        }
        /*int i=0,j=k-1,a=0;
        int flag = 0;
        while(i<=j){
            if(a+k<=n-1 && flag == 0){
                i = a;
                j = a+k-1;
                a = a+k;
                flag = 1;
            }
            if(a+k>n-1 && flag == 0){
                i = a;
                j = n-1;
                flag = 1;
            }
            
            if(flag == 1){
                swap(arr[i],arr[j]);
                i++;
                j--;
                if(i==j){
                    flag=0;
                }
            }
        }*/
        
        for(int i=0;i<n;i+=k){
            int start = i;
            int end = min(i+k-1,n-1);
            while(start < end){
                swap(arr[start++],arr[end--]);
            }
        }
    }
};

int main(){
    vector<int> arr = {5, 6, 8, 9};
    Solution s;
    s.reverseInGroups(arr,5);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
}


