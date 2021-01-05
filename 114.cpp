//
// Created by root on 2020/12/16.
//

  //Definition for a binary tree node.
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
    void flatten(TreeNode* root) {
        if(!root)
            return;
        flatten(root->left);
        flatten(root->right);
        TreeNode* troot = root;
//        TreeNode* tleft = root->left;
        TreeNode* tright = root->right;
        root->right = root->left;
        root->left = NULL;
        while (troot->right)
            troot = troot->right;
        troot->right = tright;
    }
};
#include "114.h"
int main(){
    return 0;
}