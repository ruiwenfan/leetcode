#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int len=s.size();
        stack<char>st;
        for(int i=0;i<len;i++){
            if(s[i]=='{'|| s[i]=='(' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                    char tmp=st.top();
                    if((tmp=='{' && s[i]=='}') || (tmp=='(' && s[i]==')') || (tmp=='[' && s[i]==']')){
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        return st.empty()? true :false;
    }
};