//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int cursum = 0;
        for(int i=0;i<k;i++){
            cursum += arr[i];
        }
        int maxsum = cursum;
        for(int i=k;i<n;i++){
            cursum = cursum - arr[i-k] + arr[i];
            if(cursum > maxsum) maxsum = cursum;
        }
        return maxsum;
    }
};