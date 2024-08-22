class Solution {
public:
    int solve(int num){
        string s="";
        while(num!=0){
            int ans=num%2;
            s+=ans^1;
            num=num/2;
        }
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=(int)s[i]*pow(2,i);
        }
        return ans;

    }
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        return solve(n);
    }
};
