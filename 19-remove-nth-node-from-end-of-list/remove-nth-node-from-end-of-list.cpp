class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            delete(head);
            return NULL;
        }

        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int res=count-n;
        if(res==0){
            ListNode* newHead=head->next;
            delete(head);
            return newHead;
        }
        temp=head;
        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* deleteNode=temp->next;
        temp->next=temp->next->next;
        delete(deleteNode);
        return head;
    }
};