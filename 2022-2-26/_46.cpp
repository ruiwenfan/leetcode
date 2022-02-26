#include <deque>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    void callback(vector<vector<int>>&ans,vector<int>&out,int place,int len){
        if(place==len){
            ans.push_back(out);
        }
        for(int i=place;i<len;i++){
            swap(out[place],out[i]);
            callback(ans,out,place+1,len);
            swap(out[place],out[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int len=nums.size();
        vector<vector<int>>ans;
        callback(ans,nums,0,len);
        return ans;
    }
};