#include<iostream>
using namespace std;
bool search(int arr[][4], int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key == arr[i][j]) return true;
        }
    }
    return false;
}

int main(){
    int arr[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};

    cout<<(search(arr,4,4,7)?"Found":"Not Found");
}