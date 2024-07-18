
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        // if(fast==NULL){
        //     delete(slow);
        //     return head;
        // }
        fast=head;
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=slow->next;
        delete(slow);
        return head;

    }
};