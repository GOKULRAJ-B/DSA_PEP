#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int m;

    cout<<"Enter the number of vertices : ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;

    unordered_map<int,vector<int>> adjList;
    cout<<"Enter the edges(u,v): ";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u;
        cin>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(auto i : adjList){
        cout<<i.first<<": ";
        for(int j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}