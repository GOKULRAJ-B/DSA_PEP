#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> pq_max;

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(20);
    cout<<pq_max.size();
}