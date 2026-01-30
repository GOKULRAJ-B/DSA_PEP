//common in 3 sorted array
//https://www.geeksforgeeks.org/problems/common-elements1132/1

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int n1 = arr1.size();
        int n2 = arr2.size();
        int n3 = arr3.size();
        vector<int> common;
        int i=0,j=0,k=0;
        while(i<n1 && j<n2 && k<n3){
            if(arr1[i] == arr2[j] && arr2[j]==arr3[k] ){
                if(common.empty() || common.back() != arr1[i]){
                    common.push_back(arr1[i]);
                }
                i++;
                k++;
                j++;
            }
            else if(arr1[i] < arr2[j]) i++;
            else if(arr2[j] < arr3[k]) j++;
            else k++;
        }
        return common;
    }
    
};