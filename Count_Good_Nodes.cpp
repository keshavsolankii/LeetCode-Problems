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
    void dfs(TreeNode* root, int Maxi, int& count){
            if(!root) return;

            if(root->val >= Maxi)
                count++;

            Maxi = max(Maxi, root->val);

            dfs(root->left, Maxi, count);
            dfs(root->right, Maxi, count);
        }
    int goodNodes(TreeNode* root) {
        int count=0;
        
        dfs(root, INT_MIN, count);
        return count;
    }
};
