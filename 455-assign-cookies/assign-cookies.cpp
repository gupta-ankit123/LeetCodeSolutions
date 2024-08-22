class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        int i=0,j=0,cnt=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n&&j<m){
            while(i<n&&j<m&&s[j]<g[i]){
                j++;
            }
            if(i<n&&j<m&&s[j]>=g[i]){
                cnt++;
                i++;
                j++;
           }
            
        }
        return cnt;
    }
};