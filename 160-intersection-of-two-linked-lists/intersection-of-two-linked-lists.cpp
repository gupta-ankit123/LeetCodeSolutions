class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>mpp;
        ListNode* temp1=headA;
        while(temp1!=NULL){
            mpp[temp1]++;
            temp1=temp1->next;
        }
        ListNode* temp2=headB;
        while(temp2!=NULL){
            if(mpp[temp2]>0) return temp2;
            temp2=temp2->next;
        }
        return NULL;
    }
};