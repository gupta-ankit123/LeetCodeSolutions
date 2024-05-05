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
        ListNode* temp = node;
        ListNode* n = temp->next;
        while(n->next != NULL){
            temp->val = n->val;
            temp = n;
            n = n->next;
        }
        temp ->val = n->val;
        temp->next = NULL;
    }
};