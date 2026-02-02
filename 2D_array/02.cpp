#include<iostream>
#include<vector>
using namespace std;

void wavePrint(int arr[][3], int n, int m){
    for(int i=0;i<m;i++){
        if(i==0 || i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}

void spiralPrint(int arr[][3], int n, int m){
    int left_corner = 0;
    int top_row = 0;
    int right_corner = m-1;
    int bottom_row = n-1;

    while(top_row<=bottom_row && left_corner<=right_corner){
        for(int i = left_corner; i<=right_corner; i++){
            cout<<arr[top_row][i]<<" ";
        }
        top_row++;
        cout<<endl;
        for(int i = top_row; i<=bottom_row; i++){
            cout<<arr[i][right_corner]<<" ";
        }
        right_corner--;
        cout<<endl;
        for(int i = right_corner; i>=left_corner; i--){
            cout<<arr[bottom_row][i]<<" ";
        }
        bottom_row--;
        cout<<endl;
        for(int i = bottom_row; i>=top_row; i--){
            cout<<arr[i][left_corner]<<" ";
        }
        left_corner++;
        cout<<endl;
    }
}


vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
    int m = mat[0].size();
    int n = mat[1].size();
    int left_corner = 0;
    int top_row = 0;
    int right_corner = m-1;
    int bottom_row = n-1;
    vector<int> mat1;
    if(n<=1 && m<=1){
        mat1.push_back(mat[0][0]);
        return mat1;
    }
    while(top_row<=bottom_row && left_corner<=right_corner){
        for(int i = left_corner; i<=right_corner; i++){
            mat1.push_back(mat[top_row][i]);
        }
        top_row++;
        
        for(int i = top_row; i<=bottom_row; i++){
            mat1.push_back(mat[i][right_corner]);
        }
        right_corner--;
        
        for(int i = right_corner; i>=left_corner; i--){
            mat1.push_back(mat[bottom_row][i]);
        }
        bottom_row--;
        
        for(int i = bottom_row; i>=top_row; i--){
            mat1.push_back(mat[i][left_corner]);
        }
        left_corner++;
        break;
    }
    return mat1;
}

int main(){
    //int arr[3][3]={{1,2,3},
               //    {4,19,6},
                 //  {7,8,9}};
    //int max_sum=INT_MIN, index;

    /*Max row sum
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        if(sum>max_sum){
            max_sum = sum;
            index = i;
        }
    }*/

    //max column sum
    /*for(int j=0; j<3; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum+=arr[i][j];
        }
        if(sum>max_sum){
            max_sum = sum;
            index = j;
        }
    }*/
    //cout<<index;
    //spiralPrint(arr,3,3);



    vector<vector<int>> arr1 = {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}};
    vector<int> vec = boundaryTraversal(arr1);
}