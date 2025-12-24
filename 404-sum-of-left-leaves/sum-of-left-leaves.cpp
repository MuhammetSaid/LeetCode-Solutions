class Solution {
public:
    void preo(TreeNode* root ,int &toplam)
    {
        if (root == nullptr ) return ;
        if (root ->left != nullptr && root ->left->left == nullptr && root ->left->right == nullptr) toplam += root->left->val;
        preo(root->left,toplam);
        preo(root->right,toplam);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int toplam = 0;
        preo (root,toplam);
        return toplam;
    }
};