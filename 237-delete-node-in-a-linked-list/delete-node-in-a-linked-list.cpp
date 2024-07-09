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
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* curr=node->next;
        
        while(curr->next!=NULL){
            int el=temp->val;
            temp->val=curr->val;
            curr->val=el;
            temp=temp->next;
            curr=curr->next;
        }
        int el=temp->val;
            temp->val=curr->val;
            curr->val=el;
            temp->next=NULL;
        
        
        
    }
};