int minPathSum(int** grid, int gridSize, int* gridColSize){
    int row=gridSize;
    int col=*gridColSize;
    int ans[row][col];
    ans[row-1][col-1]=grid[row-1][col-1];
    for(int i=row-2;i>=0;i--){
        ans[i][col-1]=ans[i+1][col-1]+grid[i][col-1];        
    }
    for(int i=col-2;i>=0;i--){
        ans[row-1][i]=ans[row-1][i+1]+grid[row-1][i];
    }
    for(int i=row-2;i>=0;i--)
      for(int j=col-2;j>=0;j--){
          ans[i][j]=fmin(ans[i][j+1],ans[i+1][j])+grid[i][j];
      }
    return ans[0][0];
}