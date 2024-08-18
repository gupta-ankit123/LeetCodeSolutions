class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // map<char,int> mpp;
        vector<int> hash(256,-1);
        int l=0;
        int r=0;
        int n=s.length();
        int maxLen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            
            int len=r-l+1;
            maxLen=max(maxLen,len);
            hash[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};