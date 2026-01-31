//https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        vector<bool>occur(256,false);
        string str;
        for(char i : s){
            int a = (int)i;
            if(occur[a]==true){
                str.push_back(i);
                return str;
            }
            else{
                occur[a]=true;
            }
        }
        return "-1";
    }
};