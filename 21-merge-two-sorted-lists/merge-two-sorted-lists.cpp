class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode=new ListNode(-1);
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* temp=dummyNode;

        while(t1&& t2){
            if(t1->val>t2->val){
                temp->next=t2;
                t2=t2->next;
            }
            else{
                temp->next=t1;
                t1=t1->next;
            }
            temp=temp->next;
        }
        if(t1!=NULL){
            temp->next=t1;
        }
        else{
            temp->next=t2;
        }
        ListNode* ans= dummyNode->next;
        delete(dummyNode);
        return ans;
    }
};