//https://leetcode.com/problems/valid-anagram/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int n1 = t.length();
        if(n!=n1){
            return false;
        }
        vector<int>occur(256,0);
        for(char i : s){
            int a = (int)i;
            occur[a]++;

            
        }
        for(char i : t){
            int a = (int)i;
            occur[a]--;
        }
        for(int i=0;i<256;i++){
            if(occur[i]!=0){
                return false;
            }
        }
        return true;
    }
};