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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
          return;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*curr=slow->next;
        slow->next=NULL;
        ListNode*prev=NULL;
        while(curr!=NULL){
            ListNode*forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        ListNode*first=head;
        ListNode*second=prev;
        while(second != NULL) {
            ListNode* forw1 = first->next;
            ListNode* forw2 = second->next;
            first->next = second;
            second->next = forw1;
            first = forw1;
            second = forw2;
    }
    }

};