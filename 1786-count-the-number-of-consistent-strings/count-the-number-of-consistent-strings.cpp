class Solution {
public:
    int countConsistentStrings(string s, vector<string>& words) {
        map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int cnt=0;
        for(auto it:words){
            bool flag=true;
            for(int i=0;i<it.length();i++){
                if(mpp.find(it[i])==mpp.end()){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};