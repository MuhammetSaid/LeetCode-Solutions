class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        if(root->left==nullptr && root->right==nullptr) return 1;
        return 1+ max(maxDepth(root->left),maxDepth(root->right));
    }
};