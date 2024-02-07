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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        vector<vector<int>> ans;

        queue<TreeNode*> q;
        q.push(root);

        if(!root) return {};

        while(!q.empty())
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left)  
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);

                res.push_back(temp->val);
            }
            ans.push_back(res);
            res.clear();
        }
        for(int i=0; i<ans.size(); i++)
        {
            res.push_back(ans[i][ans[i].size()-1]);
        }
        return res;
    }
};
