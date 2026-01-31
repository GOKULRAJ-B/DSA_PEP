//https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>occur(256,0);
        for(char i : s){
            int a = (int)i;
            if(occur[i]==0){
                occur[i]=1;
            }
            else{
                occur[i]=-1;
            }
        }
        int index=0;
        for(char i : s){
            int a = (int)i;
            if(occur[i]==1){
                return index;
            }
            index++;
        }
        return -1;
    }
};