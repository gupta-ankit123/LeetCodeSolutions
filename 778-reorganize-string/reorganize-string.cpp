class node{
    public:
    char data;
    int count;

    node(char d,int c){
        data=d;
        count=c;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return a->count<b->count;
    }
};

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<node*,vector<node*>,compare>maxHeap;
        for(auto it: mp){
            node* temp=new node(it.first,it.second);
            maxHeap.push(temp);
        }

        string ans="";
        while(maxHeap.size()>1){
            node* first=maxHeap.top();
            maxHeap.pop();
            node* second=maxHeap.top();
            maxHeap.pop();

            ans+=first->data;
            ans+=second->data;

            first->count--;
            second->count--;

            if(first->count!=0){
                maxHeap.push(first);
            }
            if(second->count!=0){
                maxHeap.push(second);
            }
        }
        if(maxHeap.size()==1){
            node* temp=maxHeap.top();
            maxHeap.pop();
            if(temp->count==1){
                ans+=temp->data;
            }
            else{
                return "";
            }
        }
        return ans;
    }
};