#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        int n = num.size();
        std::stack<char> st;
        
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        std::string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        std::reverse(ans.begin(), ans.end());
        
        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }
        ans = (i == ans.size()) ? "0" : ans.substr(i);
        
        return ans;
    }
};
