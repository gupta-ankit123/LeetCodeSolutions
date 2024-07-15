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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        ListNode* temp=head->next;

        while(temp!=NULL){
            curr=curr->next;
            temp=temp->next;
            if(temp!=NULL){
                temp=temp->next;
            }
            
        }
        return curr;
    }
};