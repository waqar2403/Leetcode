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
    void levelorder(vector<vector<int>>& ans,TreeNode* root)
    {
        if(root == nullptr){return;}
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> level;
            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr){q.push(node->left);}
                if(node->right != nullptr){q.push(node->right);}
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        levelorder(ans,root);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};