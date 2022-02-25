int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize){
    int row=obstacleGridSize;
    int col=*obstacleGridColSize;
    long long ans[row][col];
    int flag=0;
    for(int i=row-1;i>=0;i--){
        if(obstacleGrid[i][col-1]==1){
            flag=1;
        }
        if(flag==1){
            ans[i][col-1]=0;
        }else{
            ans[i][col-1]=1;
        }
    }
    flag=0;
    for(int i=col-1;i>=0;i--){
        if(obstacleGrid[row-1][i]==1){
            flag=1;
        }
        if(flag==1){
            ans[row-1][i]=0;
        }else{
            ans[row-1][i]=1;
        }
    }
    for(int i=row-2;i>=0;i--)
      for(int j=col-2;j>=0;j--){
          if(obstacleGrid[i][j]==1){
              ans[i][j]=0;
          }else{
              ans[i][j]=ans[i][j+1]+ans[i+1][j];
          }
      }
    return ans[0][0];
}
//ps:ans[][] should long long type.