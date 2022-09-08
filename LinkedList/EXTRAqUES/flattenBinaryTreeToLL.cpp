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

// time O(N) space= O(1)
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        TreeNode*curr=root;
        while(curr)
        {
            if(curr->left)
            {
                TreeNode*pre=curr->left;
                while(pre->right)
                {
                    pre=pre->right;
                }
                pre->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }
};