class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL || head->next->next==NULL){
            return head;
        }

        ListNode* temp=head;
        ListNode* curr=head->next;
        ListNode* prev=head->next;

        while(curr!=NULL && curr->next!=NULL){
            
            temp->next=curr->next;
            temp=curr->next;
            curr->next=temp->next;
            curr=temp->next;
            
        }
        temp->next=prev;
        return head;
    }
};