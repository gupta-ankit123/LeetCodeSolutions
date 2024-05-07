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
    ListNode* doubleIt(ListNode* head) {
        stack<int> st;
        while(head!=NULL){
            st.push(head->val);
            head=head->next;
        }

        ListNode* tail=NULL;
        int ans=0;
        while(!st.empty() || ans!=0){
            tail=new ListNode(0,tail);
            if(!st.empty()){
                ans+=2*st.top();
                st.pop();
            }
            tail->val=ans%10;
            ans=ans/10;

        }
        return tail;

        
    }
};