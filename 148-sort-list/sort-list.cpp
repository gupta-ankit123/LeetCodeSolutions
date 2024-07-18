class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        vector<int> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(st.begin(),st.end());
        for(auto it:st){
            temp->val=it;
            temp=temp->next;
        }
        return head;
    }
};