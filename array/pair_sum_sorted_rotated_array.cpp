//https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1
//pair sum in sorted and rotated array

#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int pivot = 0;
        
        
        //find pivot largest element
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pivot = i;
                break;
            }
        }
        
        if(pivot == -1){
            pivot = n-1;
        }
        int low = (pivot+1)%n;
        int high = pivot;
        
        while(low!=high){
            int sum = arr[low] + arr[high];
            if(sum == target) return true;
            
            else if(sum < target) low = (low +1)%n;
            else high = (high-1+n)%n;
        }
        return false;
    }
};