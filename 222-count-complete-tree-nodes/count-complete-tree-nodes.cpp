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

    void inorctrl(TreeNode* root,int &sayac)
    {
        if (root == nullptr) return ;
        inorctrl(root->left,sayac);
        sayac++;
        inorctrl(root->right,sayac);
    }


    int countNodes(TreeNode* root) {
        int sayac = 0;
        inorctrl(root,sayac);
        return sayac;
    }
};