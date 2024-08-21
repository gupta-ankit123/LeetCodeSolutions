class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0,maxsum=0;
        for(int i=0;i<k;i++) lsum+=arr[i];
        maxsum=lsum;
        int rindex=arr.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=arr[i];
            rsum+=arr[rindex];
            rindex--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};