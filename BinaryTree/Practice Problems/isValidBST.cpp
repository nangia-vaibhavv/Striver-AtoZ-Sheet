// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL)return true;
//         if(root->right->val>root->val && root->left->val<root->val)return true;
//         return isValidBST(root->left) && isValidBST(root->right);
//     }
// };
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
          vector<int>res;

    void inorder(TreeNode *root)
    {
        if(root==NULL) return;
         inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);

    }
    bool isValidBST(TreeNode* root) {
         if (!root)
            return true;
        inorder(root);
//         since inorder traversal of bst given nodes in non devcreasing order hence
//         compute inorder traversal of given node and than checkig its order
        for(int i=1;i<res.size();i++)
        {
            if(res[i]<=res[i-1])
                return false;
        }
        return true;
    }
};