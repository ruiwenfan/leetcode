
#include <malloc.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){
    if(preorderSize==0){
        return NULL;
    }
    int i;
    for(i=0;i<inorderSize;i++){
        if(inorder[i]==preorder[0])
            break;
    }
    struct TreeNode* root=malloc(sizeof(struct TreeNode));
    root->val=preorder[0];
    int left=i,right=inorderSize-(i+1);
    root->left=buildTree(preorder+1,left,inorder,left);
    root->right=buildTree(preorder+left+1,right,inorder+left+1,right);
    return root;
}