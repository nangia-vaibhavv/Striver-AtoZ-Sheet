/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool search(TreeNode*root,int B, vector<int>&ans)
{
     if(root==NULL)return false;
     ans.push_back(root->val);
     if(root->val==B)return true;
     if(search(root->left,B,ans)|| search(root->right,B,ans))return true;
     ans.pop_back();
     return false;   
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    search(A,B,ans);
    return ans;
}
