

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        ListNode *temp=head;
       
        while(n--)
        {
            curr=curr->next;
        }
        if(curr==NULL)return head->next;
        while( curr->next!=NULL) 
        {
            curr=curr->next;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};