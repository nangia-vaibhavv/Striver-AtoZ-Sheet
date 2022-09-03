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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *cursor=head;
        for(int i=0;i<k;i++)
        {
            if(cursor==NULL)return head;
            else cursor=cursor->next;
        }
         ListNode *curr=head;
        ListNode*temp=NULL;
        ListNode *prev=NULL;
        for(int i=0;i<k;i++)
        {
             temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head->next=reverseKGroup(cursor,k);
        return prev;
    }
};