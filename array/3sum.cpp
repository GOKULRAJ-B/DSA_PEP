#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums,int target) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int>arr=nums;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target) result.push_back({arr[i],arr[j],arr[k]});
                else if(sum<target) j++;
                else k--;
            }
        }
        return result;
    
}