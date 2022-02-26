#include <deque>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        bool flag=true; //left->right
        vector<vector<int>>ans;
        if(!root)
          return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            deque<int>deq;
            for(int i=0;i<size;i++){
                TreeNode *tmp=q.front();
                q.pop();
                if(flag){
                    deq.push_back(tmp->val);
                }else{
                    deq.push_front(tmp->val);
                }
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            ans.push_back(vector<int>{deq.begin(),deq.end()});
            flag=!flag;
        }
        return ans;
    }
};