
#include <stdio.h>
#include <math.h>
struct TreeNode {
    int val;     
    struct TreeNode *left;    
    struct TreeNode *right; 
};
 
int maxDepth(struct TreeNode* root){
    if(!root){
        return 0;
    }
    int lc=maxDepth(root->left);
    int rc=maxDepth(root->right);
    return fmax(lc,rc)+1;
}