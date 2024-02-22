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

    void inOrder(TreeNode* root, int &cnt, int &ans, int k)
    {
        if(!root) return;
        inOrder(root->left, cnt, ans, k);
        cnt++;
        if(cnt == k){   
            ans = root->val;
            return;
        }
        inOrder(root->right, cnt, ans, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0, ans;
        inOrder(root, cnt, ans, k);
        return ans;
    }
};

//Another Approach
class Solution {
public:

    void inOrder(TreeNode* root, vector<int> &v)
    {
        if(!root) return;
        inOrder(root->left, v);
        v.push_back(root->val);
        inOrder(root->right, v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inOrder(root, v);
        return v[k-1];
    }
};
