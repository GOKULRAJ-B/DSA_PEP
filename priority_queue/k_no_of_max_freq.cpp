//https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            minHeap.push({i.second,i.first});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        vector<int>result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};