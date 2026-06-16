class Solution {
public:
    int arrangeCoins(int n) {
        long long cnt=0;
        long long t=n;
        for(int i=1;i<=n;i++){
            if(t-i>=0){
                cnt++;
                t-=i;
            }
            if(t-i<0) break;
        }
        return cnt;
    }
};