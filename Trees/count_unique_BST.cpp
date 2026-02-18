

//https://leetcode.com/problems/unique-binary-search-trees/?envType=problem-list-v2&envId=tree


class Solution {
public:
    int numTrees(int n) {
        long long result = 1;
        for(int i=0; i<n; i++){
            result = result * 2 *(i*2+1)/ (i+2);
        }
        return (int)result;
    }
};