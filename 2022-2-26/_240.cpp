#include <deque>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int r=0,c=col-1;
        while((r>=0&&r<row)&&(c>=0&&c<col)){
            if(matrix[r][c]==target){
                return true;
            }else if(target>matrix[r][c]){
                r++;
            }else{
                c--;
            }
        }
        return false;
    }
};