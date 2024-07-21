class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n=word1.length();
        int m=word2.length();

        int i=0;
        int j=0;
        while(i<n && j<m){
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        if(i<n){
            while(i<n){
                ans+=word1[i];
                i++;
            }
        }

        if(j<m){
            while(j<m){
                ans+=word2[j];
                j++;
            }
        }
        return ans;
    }
};