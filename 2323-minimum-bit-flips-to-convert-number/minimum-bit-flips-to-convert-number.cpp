class Solution {
public:
    string binary(int n){
        string ans="";
        while(n!=0){
            ans+=to_string(n%2);
            n=n/2;
        }
        return ans;
    }
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        string s=binary(ans);
        cout<<s;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};