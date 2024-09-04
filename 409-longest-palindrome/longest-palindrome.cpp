class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        int cnt=0;
        bool flag=false;
        for(auto it:mpp){
            if(it.second%2==0){
                cnt+=it.second;
            }
            else{
                cnt+=it.second-1;
                flag=true;
            }
        }
        if(flag) return cnt+1;
        return cnt;
    }
};