
// // method 1 find its inorder traversal and k-1 index elemnt wil be ans
// class Solution {
// public:
//     void inorderUtil(TreeNode*root,vector<int>&ans)
//     {
//         if(root==NULL)return;
//         if(root->left)inorderUtil(root->left,ans);
//         ans.push_back(root->val);
//         if(root->right)inorderUtil(root->right,ans);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int>ans;
//         inorderUtil(root,ans);
//         return ans[k-1];
//     }
// };


// method 2 using max heap as it ask for k min hence use max heap
// method 1 find its inorder traversal and k-1 index elemnt wil be ans
class Solution {
public:

   void inorderUtil(TreeNode*root,vector<int>&ans)
    {
        if(root==NULL)return;
        if(root->left)inorderUtil(root->left,ans);
        ans.push_back(root->val);
        if(root->right)inorderUtil(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorderUtil(root,ans);
        
       priority_queue<int>pq;
        for(int i=0;i<ans.size();i++)
        {
            pq.push(ans[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};