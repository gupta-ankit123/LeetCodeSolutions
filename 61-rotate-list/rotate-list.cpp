class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        if(k==0 || head->next==NULL) return head;
        int len=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        temp->next=head;
        k=k%len;
        int toMove=len-k;
        ListNode* curr=head;
      
        while(toMove>1){
            curr=curr->next;
            toMove--;
        }
        ListNode* newhead=curr->next;
        curr->next=NULL;
        return newhead;
    }
};