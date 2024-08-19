class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        int l=0,r=0;
        unordered_map<char,int> mpp;
        while(r<n){
            mpp[s[r]]++;
            while(mpp['a']>=1 && mpp['b']>=1 && mpp['c']>=1){
                cnt+=n-r;
                mpp[s[l]]--;
                l++;
            }
            r++;
        }
        return cnt;
    }
};