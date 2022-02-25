int numIslands(char** grid, int gridSize, int* gridColSize){
    int ans=0;
    int row=gridSize;
    int col=*gridColSize;
    for(int i=0;i<row;i++)
      for(int j=0;j<col;j++){
          if(grid[i][j]=='1'){
              dfs(grid,i,j,row,col);
              ans++;
          }
      }
    return ans;
}
void dfs(char **grid,int i,int j,int row_count,int col_count){
    if(i<0 || j<0 || i>=row_count || j>=col_count || grid[i][j]=='0'){
        return;
    }
    grid[i][j]='0';
    dfs(grid,i-1,j,row_count,col_count);
    dfs(grid,i+1,j,row_count,col_count);
    dfs(grid,i,j-1,row_count,col_count);
    dfs(grid,i,j+1,row_count,col_count);
}