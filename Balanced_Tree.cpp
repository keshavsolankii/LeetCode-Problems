class Solution {
public:
    int height(TreeNode* root)
    {
        if(!root) return NULL;

        int left = height(root->left);
        int right = height(root->right);
        return max(left, right)+1;
    }

    bool isBalanced(TreeNode* root)
    {
        if(!root) return true;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        bool currBalanced = abs(leftHeight - rightHeight) <= 1;
        bool leftBalanced = isBalanced(root->left);
        bool rightBalanced = isBalanced(root->right);

        return currBalanced && leftBalanced && rightBalanced;
    }
};
