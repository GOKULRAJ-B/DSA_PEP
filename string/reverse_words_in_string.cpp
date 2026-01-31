//https://leetcode.com/problems/reverse-words-in-a-string/

#include<iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int leading = 0;
        int start = 0;
        int end = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=' ' && leading==0){
                leading = 1;
                start = i;
            }
            else{
                if(s[i]!=' '){
                    end = i;
                }
            }
        }
        string trimmed = s.substr(start,end - start+1);
        int m = trimmed.length();
        int start1 = -1;
        string result;
        int space = 0;
        for(int i=m-1;i>=0;i--){
            if(trimmed[i]==' '){
                if(start1!=-1){
                    result.append(trimmed.substr(i+1,start1-i));
                    result.push_back(' ');
                    start1 = -1;
                }
            }
            else{
                if(start1==-1){
                    start1 = i;
                }
            }
            if(i==0){
                result.append(trimmed.substr(0,start1+1));
            }
        }
        
        return result;
    }
};