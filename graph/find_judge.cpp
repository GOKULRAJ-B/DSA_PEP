

//https://leetcode.com/problems/find-the-town-judge/?envType=problem-list-v2&envId=graph
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>visited(n+1,0);
        for(auto i : trust){
            visited[i[1]]++;
            visited[i[0]]--;
        }
        for(int i=1;i<=n;i++){
            if(visited[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};