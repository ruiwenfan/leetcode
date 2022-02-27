#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x;
        while(left<=right){
            int mid=(right-left)/2+left;
            if((long long )mid*mid <= x){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return right;
    }
};