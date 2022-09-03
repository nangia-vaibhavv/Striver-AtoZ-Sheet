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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        ListNode *curr=head;
        ListNode *res=head;
        int n=1;
        while(res!=NULL && res->next!=NULL)
        {
            res=res->next;
            n++;
        }
        int r=k%n;
        while(r--)
        {
            curr=curr->next;
        }
        ListNode*temp=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            temp=temp->next;
        }
        curr->next=head;
        head=temp->next;
        temp->next=NULL;
        
            return head;
    }
};