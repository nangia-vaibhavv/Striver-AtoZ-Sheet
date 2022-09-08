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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr=head,*temp=head,*res=head;
        int count=0;
        while(res!=NULL)
        {
            res=res->next;
            count++;
        }
        for(int i=1;i<k;i++)
        {
            curr=curr->next;
        }
        for(int i=1;i<count-k+1;i++)
        {
            temp=temp->next;
        }
        swap(temp->val,curr->val);
        return head;
    }
};