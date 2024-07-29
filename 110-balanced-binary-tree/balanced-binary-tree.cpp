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
    bool isBalanced(TreeNode* root) {
        bool result =true;
        helper(root,result);
        return result;
    }
    int helper(TreeNode* root,bool& result)
    {
        if(root == nullptr || result == false)
        {
            return 0;
        }
        int lh = helper(root->left,result);
        int rh = helper(root->right,result);
        if(abs(lh-rh)>1)
        {
            result = false;
        }
        return max(lh,rh)+1;
    }
};