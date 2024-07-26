class Solution {
public:
    ListNode* reverse(ListNode* node){
        ListNode* prev=NULL;
        ListNode* temp=NULL;
        ListNode* curr=node;

        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* getKthNode(ListNode* temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;

        while(temp!=NULL){
            ListNode*kthNode=getKthNode(temp,k);
            if(kthNode==NULL){
                if(prevNode) prevNode->next=temp;
                break;
            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            reverse(temp);
            if(temp==head) head=kthNode;

            else prevNode->next=kthNode; 

            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};