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

class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>minHeap;
        
        int k=lists.size();
        if(k==0){
            return NULL;
        }

        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                minHeap.push(lists[i]);
            }
        }

        ListNode* head=NULL;
        ListNode* tail=NULL;

        while(!minHeap.empty()){
            ListNode* temp=minHeap.top();
            minHeap.pop();
            //temp may or may not be the first element of the LL
            if(head==NULL){
                //head is NULL it means it is the first element of the LL
                head=temp;
                tail=temp;
                if(tail->next!=NULL){
                    minHeap.push(tail->next);
                }
            }
            else{
                //it is not the first element
                tail->next=temp;
                tail=temp;
                if(tail->next!=NULL){
                    minHeap.push(tail->next);
                }

            }
        }
        return head;
    }
};