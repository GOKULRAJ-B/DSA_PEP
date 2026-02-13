//https://leetcode.com/problems/gas-station/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    // bool check(int start, vector<int>gas, vector<int>cost){
    //     int count = 0;
    //     int tank = 0;
    //     int n = gas.size();
    //     for(int i = start; count<n; i++){
    //         int index = i%n-1;
    //         tank = tank +  gas[index] - cost[index];
    //         if(tank<0) return false;
    //         count++;
    //     }
    //     return true;
    // }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        /*for(int i=0;i<gas.size();i++){
            if(check(i,gas,cost) && gas[i]>=cost[i]) return i;
        }
        return -1;*/


        int n = gas.size();
        int balance = 0;
        int total_tank = 0;
        int curr_tank = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            balance = gas[i]-cost[i];
            total_tank += balance;
            curr_tank += balance;
            if(curr_tank < 0){
                start = i+1;
                curr_tank  = 0;
            }
        }
        if(total_tank < 0) return -1;

        return start;
    }
};