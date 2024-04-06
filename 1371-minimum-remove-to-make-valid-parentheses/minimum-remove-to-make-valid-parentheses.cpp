class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans;
        int lc=0,rc=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                lc++;
            }
            else if(ch==')'){
                rc++;
            }
            if(rc>lc){
                rc--;
                continue;
            }
            else{
                st.push(ch);
            }
            
        }
        while(!st.empty()){
            char res=st.top();
            st.pop();
            if(lc>rc && res=='('){
                lc--;
                
            }
            else{
                ans.push_back(res);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
            
    }
};