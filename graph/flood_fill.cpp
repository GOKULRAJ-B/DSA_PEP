
//https://leetcode.com/problems/flood-fill/

class Solution {
public:

    void dfs(int r, int c, vector<vector<int>> &image, int originalColor, int newColor){
        int n = image.size();
        int m = image[0].size();
        if(r<0 || r>=n || c<0 || c>=m) return;
        if(image[r][c] != originalColor) return;
        image[r][c] = newColor;
        dfs(r-1,c,image,originalColor,newColor);
        dfs(r,c-1,image,originalColor,newColor);
        dfs(r+1,c,image,originalColor,newColor);
        dfs(r,c+1,image,originalColor,newColor);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // queue<pair<int,int>> q;
        // int key = image[sr][sc];
        // if (key == color) return image;
        // int n = image.size();
        // int m = image[0].size();
        // q.push({sr,sc});
        // while(!q.empty()){
        //     int r = q.front().first;
        //     int c = q.front().second;
        //     q.pop();
        //     if(image[r][c]==key){
        //         image[r][c] = color;
               
        //         if(r-1>=0){
        //             if(image[r-1][c]==key) q.push({r-1,c});
        //         }
        //         if(c-1>=0){
        //             if(image[r][c-1]==key) q.push({r,c-1});
        //         }
                
        //         if(r+1<n){
        //             if(image[r+1][c]==key) q.push({r+1,c});
        //         }
        //         if(c+1<m){
        //             if(image[r][c+1]==key) q.push({r,c+1});
        //         }
                
        //     }
        // }
        // return image;

        int originalColor = image[sr][sc];

        if(originalColor == color) return image;
        dfs(sr,sc,image,originalColor,color);
        return image;

    }
};