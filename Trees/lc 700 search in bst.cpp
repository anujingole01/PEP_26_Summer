//700 lc search in binary tree

class Solution {
public:
    bool searchBST(TreeNode* root, int val) {
        if(!root) return false;
        if(root->val == val) return true;
        else if(val < root->val) return searchBST(root->left, val);
        else return searchBST(root->right, val);
    }
};