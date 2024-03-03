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
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }

        if(n==count){
            return head->next;
        }

        temp=head;
        int i=1;
        while(i<count-n){
            temp=temp->next;
            i++;
        }
        ListNode* curr=temp->next;
        temp->next=temp->next->next;
        delete curr;
        return head;

        
    }
};