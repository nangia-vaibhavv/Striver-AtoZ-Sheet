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
    
    int pairSum(ListNode* head) {
        // int maxi=INT_MIN;
        // ListNode*curr=head;
        // int count=0;
        // vector<int>res;
        // while(curr!=NULL)
        // {
        //     res.push_back(curr->val);
        //     curr=curr->next;
        //     count++;
        // }
        // int n=res.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=n;j>=0;j--)
        //     {
        //         if(i<j)
        //         {
        //            if(res[i]+res[j]>maxi)maxi=res[i]+res[j];
        //         }
        //         else return maxi;
        //     }
        // }
        // return maxi;
        
        
        ListNode*slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
                        slow=slow->next;
        }
        slow=reverseList(slow);
        int res=0;
        while(slow!=NULL)
        {
            res=max(res,slow->val+head->val);
            head=head->next;
            slow=slow->next;
        }
        return res;
    }
    
    ListNode*reverseList(ListNode *head)
    {
        ListNode *temp=NULL,*prev=NULL,*curr=head;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
