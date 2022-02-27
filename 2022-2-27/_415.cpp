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
    string addStrings(string num1, string num2) {
        string ans="";
        int l1=num1.size();
        int l2=num2.size();
        int len1=l1-1;
        int len2=l2-1;
        int re=0;
        while(len1>=0 ||len2>=0){
            int x = len1>=0 ?num1[len1]-'0' : 0;
            int y = len2>=0 ?num2[len2]-'0' : 0;
            ans.push_back('0'+(x+y+re)%10);
            re=(x+y+re)/10;
            len1--;
            len2--;
        }
        if(re!=0){
            ans.push_back('0'+re);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//ps: zero padding 