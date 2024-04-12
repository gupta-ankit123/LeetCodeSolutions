class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        if(n==k){
            return "0";
        }
        stack<char> st;
        string ans;
        for(int i=0;i<n;i++){
            char ch=num[i];
            while(!st.empty()&&k>0&&ch<st.top()){
            st.pop();
            k--;
           }
           if(!st.empty()||ch!='0'){
            st.push(ch);
           }
           
        }
        while(!st.empty()&&k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if (ans.empty()) {
            return "0";
        }
        return ans;
        
    }
};