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

    void tovector(TreeNode* root , vector<int>& son)
    {
        if(root == nullptr) return ;
        tovector(root->left,son);
        son.push_back(root->val);
        tovector(root->right,son);
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> son;
        tovector(root,son);
        sort(son.begin(),son.end());
        if (son.size() == 0) return 0;
        TreeNode* iter1 = new TreeNode(),*iter2 = iter1;
        iter1->val = son[0];
        for (int i = 1 ; i<son.size();i++)
        {
            iter2->right = new TreeNode();
            iter2 = iter2->right ;
            iter2 ->val = son[i];
        }
        return iter1;
    }
};