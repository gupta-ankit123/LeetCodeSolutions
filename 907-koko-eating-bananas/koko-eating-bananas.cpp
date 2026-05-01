class Solution {
public:
    int getMax(vector<int>& piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i =0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long totalHours(vector<int>& piles, int x){
        int n=piles.size();
        long long t=0;
        for(int i=0;i<n;i++){
            t+=ceil((double)piles[i]/(double)x);
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        long long s=1;
        long long e=getMax(piles);

        while(s<=e){
            long long mid=(s+e)/2;
            if(totalHours(piles,mid)<=h){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
       return s;
    }
};