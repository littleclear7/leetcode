//
// Created by root on 2020/12/16.
//

#include "144.h"
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
    vector<int> rv;
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL)
            return NULL;
        rv.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return rv;
    }
};