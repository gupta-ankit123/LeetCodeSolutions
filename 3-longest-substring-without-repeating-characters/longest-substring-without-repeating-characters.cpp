class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxLen=0;
        for(int i=0;i<s.length();i++){
            string st="";
            map<char,int>mpp;
            for(int j=i;j<s.length();j++){
                
                if(mpp.find(s[j])!=mpp.end()) break;
                mpp[s[j]]++;
                st+=s[j];
                maxLen=max(maxLen,j-i+1);
            }
        }
        return maxLen;
    }
};