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

    void preorderctrl(TreeNode* root,vector<int>& ans )
    {
        if (root == nullptr) return ;
        if (root->left == nullptr && root->right == nullptr) ans.push_back(root->val);
        preorderctrl(root->left,ans);
        preorderctrl(root->right,ans);
    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr ||root2 == nullptr) return 0;
        vector<int> ans1,ans2;
        preorderctrl(root1,ans1);
        preorderctrl(root2,ans2);
        return ans1 == ans2;

    }
};