/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void cntrl(TreeNode* root,int deger,int &ans)
    {
        if (root == nullptr) return ;
        cntrl(root->left,deger,ans);
        if (root->val != deger)
            ans = 1;
        cntrl(root->right,deger,ans);
    }

    bool isUnivalTree(TreeNode* root) {
        int deger1,ans = 0;
        if (root == nullptr) return false;
        deger1 = root ->val;
        cntrl(root,deger1,ans);
        return ans ==0;
    }
};