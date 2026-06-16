class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s=1;
        long long e=num;
        while(s<=e){
            long long mid=(s+e)/2;
            if(mid*mid==num) return true;
            if(mid*mid>num) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
};