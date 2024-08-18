class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int l=0;
        int r=0;
        int n=s.length();
        int maxLen=0;
        while(r<n){
            if(mpp.find(s[r])!=mpp.end()){
                if(mpp[s[r]]>=l){
                    l=mpp[s[r]]+1;
                }
            }
            
            int len=r-l+1;
            maxLen=max(maxLen,len);
            mpp[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};