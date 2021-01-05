//
// Created by root on 2021/1/4.
//

#include "queue"
#include "vector"
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *firstNode;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            result.push_back(vector<int>());
            for (int i = 0; i < size; ++i) {
                TreeNode *treeNode = q.front();
                q.pop();
                result.back().push_back(treeNode->val);
                if (treeNode->left)
                    q.push(treeNode->left);
                if (treeNode->right)
                    q.push(treeNode->right);
            }
        }
        return result;
    }
};



void createTree( TreeNode *root, vector<int> num, int nodePlace){
    if(num[2*nodePlace-1] != 0) {
        root->left = (TreeNode *) malloc(sizeof(TreeNode));
        root->left->val = num[2*nodePlace-1];
        createTree(root->left, num, 2*nodePlace);
    }
    if(num[2*nodePlace] != 0) {
        root->right = (TreeNode *) malloc(sizeof(TreeNode));
        root->right->val = num[2*nodePlace];
        createTree(root->right, num, 2*nodePlace+1);
    }

}

TreeNode* createBinaryTree(vector<int> tree){
    TreeNode *root;
    root = (TreeNode *)malloc(sizeof(TreeNode));
    int nodePlace = 1;
    if(tree[0] == 0)
        return NULL;
    root->val = tree[0];
    createTree(root,tree,1);
    return root;
}

int main(){
    vector<int> tree = {3,9,20,NULL,NULL,15,7};
    TreeNode *root;
    root = createBinaryTree(tree);
    Solution solution;
    solution.levelOrder(root);
    return 0;
}

