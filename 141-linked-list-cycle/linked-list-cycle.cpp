/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode* curr=head;
        ListNode* temp=head->next;

        while(temp!=NULL){
            temp=temp->next;
            curr=curr->next;
            if(temp!=NULL){
                temp=temp->next; 
            }

            if(curr==temp){
                return true;
            }
        }
        return false;
    }
};