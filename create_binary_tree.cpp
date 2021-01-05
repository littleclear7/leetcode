//
// Created by root on 2021/1/5.
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

//void createTree( TreeNode *root, vector<int> num, int nodePlace){
//    if(num[2*nodePlace-1] != 0) {
//        root->left = (TreeNode *) malloc(sizeof(TreeNode));
//        root->left->val = num[2*nodePlace-1];
//        createTree(root->left, num, 2*nodePlace);
//    }
//    if(num[2*nodePlace] != 0) {
//        root->right = (TreeNode *) malloc(sizeof(TreeNode));
//        root->right->val = num[2*nodePlace];
//        createTree(root->right, num, 2*nodePlace+1);
//    }
//
//}
//
//TreeNode* createBinaryTree(vector<int> tree){
//    TreeNode *root;
//    if(tree[0] == 0)
//        return NULL;
//    root = (TreeNode *)malloc(sizeof(TreeNode));
//    int nodePlace = 1;
//    root->val = tree[0];
//    createTree(root,tree,1);
//    return root;
//}
void createTree(TreeNode *&root,  vector<int> tree ,int treePlace){
    if(tree[treePlace-1] == 0 || treePlace>tree.size())
        return;
    root = static_cast<TreeNode *>(malloc(sizeof(TreeNode)));
    root->val = tree[treePlace-1];
    createTree(root->left, tree, 2*treePlace);
    createTree(root->right, tree, 2*treePlace + 1);
    return;
}

int main(){
    return 0;
}