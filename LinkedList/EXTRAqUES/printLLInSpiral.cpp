/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        vector<int>res(m,-1);
        vector<vector<int>>ans(n,res);
        ListNode* curr = head;
        int t = 0, l = 0, b = n-1, r = m-1;
        while(1)
        {
//             left to right
            for(int i=l;i<=r;i++)
            {
                ans[t][i] = curr->val;
                curr = curr->next;
                if(curr == NULL)
                    break;
            }
            t++;
            if(curr == NULL)
                break;
//             top right to bottom right
            for(int i = t;i<=b;i++)
            {
                ans[i][r] = curr->val;
                curr = curr->next;
                if(curr == NULL)
                    break;
            }
            r--;
            if(curr == NULL)
                break;
//             bottom right to bottom left
            for(int i = r;i>=l;i--)
            {
                ans[b][i] = curr->val;
                curr = curr->next;
                if(curr == NULL)
                    break;
            }
            b--;
            if(curr == NULL)
                break;
//             bottom left to top rght
            for(int i = b;i>=t;i--)
            {
                ans[i][l] = curr->val;
                curr = curr->next;
                if(curr == NULL)
                    break;
            }
            l++;
            if(curr == NULL)
                break;
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         // vector<int>res(m,-1);
//         // vector<vector<int>>ans(n,res);
//         // ListNode *curr=head;
//         // if(head==NULL)
//         // {
//         //     return ans;
//         // }
//         // while(m)
//         // {
//         //     res.push_back(curr->val);
//         //     curr=curr->next;
//         //     m--;
//         // }
//         // ans.push_back(res);
//         // return ans;
//         vector<vector<int>> ans(n, vector<int> (m, -1));
//         ListNode* tmp = head;
//         int t = 0, l = 0, b = n-1, r = m-1;
//         while(1)
//         {
//             for(int i=l;i<=r;i++)
//             {
//                 ans[t][i] = tmp->val;
//                 tmp = tmp->next;
//                 if(tmp == NULL)
//                     break;
//             }
//             t++;
//             if(tmp == NULL)
//                 break;
            
//             for(int i = t;i<=b;i++)
//             {
//                 ans[i][r] = tmp->val;
//                 tmp = tmp->next;
//                 if(tmp == NULL)
//                     break;
//             }
//             r--;
//             if(tmp == NULL)
//                 break;
            
//             for(int i = r;i>=l;i--)
//             {
//                 ans[b][i] = tmp->val;
//                 tmp = tmp->next;
//                 if(tmp == NULL)
//                     break;
//             }
//             b--;
//             if(tmp == NULL)
//                 break;
            
//             for(int i = b;i>=t;i--)
//             {
//                 ans[i][l] = tmp->val;
//                 tmp = tmp->next;
//                 if(tmp == NULL)
//                     break;
//             }
//             l++;
//             if(tmp == NULL)
//                 break;
//         }
//         return ans;
//     }
// };