class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st;
        stack<char> star;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()&&star.empty()){
                    return false;
                }
                else if(!st.empty()){
                    st.pop();
                }
                else{
                    star.pop();
                }
            }
        }

        while(!st.empty()){
            if(star.empty()){
                return false;
            }
            if(st.top()>star.top()){
                return false;
            }
            st.pop();
            star.pop();

        }
        return true;
    }
};