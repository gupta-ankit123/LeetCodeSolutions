class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        int i=0,j=0,cnt=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n&&j<m){
           if(s[j]>=g[i]){
            cnt++;
            j++;
            i++;
           }
           else{
            j++;
           }
        }
        return cnt;
    }
};