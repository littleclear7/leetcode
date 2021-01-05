//
// Created by root on 2020/12/17.
//
#include "vector"
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> re;
        _traversal(root,re);
        return re;

    }
    void _traversal(TreeNode *root, vector<int>& re){
        if (root == NULL)
            return;
        _traversal(root->left, re);
        re.push_back(root->val);
        _traversal(root->right,re);
    }
};