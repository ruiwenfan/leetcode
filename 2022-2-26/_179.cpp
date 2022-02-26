#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(to_string(nums[i]));
        }
        auto cmp=[](string a,string b){
            return a+b>b+a;
        };
        sort(v.begin(),v.end(),cmp);
        int len=nums.size();
        string ans="";
        for(auto ss:v){
            ans+=ss;
        }
        if(v[0]=="0"){
            return "0";
        }
        return ans;
    }
};