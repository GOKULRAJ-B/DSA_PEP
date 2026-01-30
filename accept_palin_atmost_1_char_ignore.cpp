//https://leetcode.com/problems/valid-palindrome-ii/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool check(string s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        int flag = 0;
        while(start<end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                if(!check(s,start+1,end) && !check(s,start,end-1)) return false;

                else break;
            }
        }
        return true;
    }
};