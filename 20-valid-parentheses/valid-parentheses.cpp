class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }

            else{
                //closing bracket
                if(!st.empty()){
                    char chTop=st.top();
                    if(ch==')' && chTop=='('){
                        st.pop();
                    }

                    else if(ch=='}' && chTop=='{'){
                        st.pop();
                    }

                    else if(ch==']' && chTop=='['){
                        st.pop();
                    }

                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }
            }
        }

        if(st.empty()){
            return true;
        }

        else{
            return false;
        }
        
    }
};