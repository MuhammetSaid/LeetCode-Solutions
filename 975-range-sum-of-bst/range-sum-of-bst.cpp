/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *ighrt;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void kontrol(int low, int high,TreeNode* root,int &ans)
    {
        if (root == nullptr) return;

        if (root ->val <= high && root ->val >= low)
            ans += root ->val;
        kontrol(low,high,root->left,ans);
        kontrol(low,high,root->right,ans);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        kontrol(low,high,root,ans);
        return ans;
    }
};