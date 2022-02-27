#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    static void dfs(vector<vector<int>>& grid,int i,int j,int & ans){
        int row=grid.size();
        int col=grid[0].size();
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]==0){
            return;
        }
        grid[i][j]=0;
        ans++;
        dfs(grid,i-1,j,ans);
        dfs(grid,i+1,j,ans);
        dfs(grid,i,j-1,ans);
        dfs(grid,i,j+1,ans);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int result=0;
        int col=grid[0].size();
        for(int i=0;i<row;i++)
          for(int j=0;j<col;j++){
              if(grid[i][j]==1){
                  int ans=0;
                  dfs(grid,i,j,ans);
                  result=max(result,ans);
              }
          }
        return result;
    }
};