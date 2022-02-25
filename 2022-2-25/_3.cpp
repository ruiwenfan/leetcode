#include <iostream>
#include <set>
#include <unordered_set>
#include <string.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int len=s.length();
        int rk=-1;
        unordered_set<char> mset;
        for(int i=0;i<len;i++){
            if(i>0){
                mset.erase(s[i-1]);
            }
            while(rk+1<len && mset.find(s[rk+1])==mset.end()){
                mset.insert(s[rk+1]);
                rk++;
            }
            ans=max(ans,rk-i+1);
        }
        return ans;
    }
};