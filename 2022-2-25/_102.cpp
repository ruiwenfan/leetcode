#include <vector>
#include <unordered_map>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        queue<TreeNode*>q;
        if(!root){
            return ret;
        }
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>tmp;
            for(int i=0;i<n;i++){
                TreeNode *t=q.front();
                q.pop();
                tmp.push_back(t->val);
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};