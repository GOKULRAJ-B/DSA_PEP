
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int firstOccurance(vector<int> &nums, int target){
        int left =0,right = nums.size()-1;
        int first = -1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                right = mid-1;
                first = mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return first;
    }

    int lastOccurance(vector<int> &nums,int target){
        int left =0,right = nums.size()-1;
        int second=-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                second =  mid;
                left = mid +1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return second;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0){
            return {-1,-1};
        }
        return {firstOccurance(nums,target),lastOccurance(nums,target)};
    }
};