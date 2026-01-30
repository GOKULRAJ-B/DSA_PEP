//https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
//need to find the largest number which is less than or equal to the given number x

#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int index = -1;
        int n = arr.size();
        int left = 0, right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==x){
                index = mid;
                left = mid+1;
            }
            else if(arr[mid]<x){
                index = mid;
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return index;
    }
};
