class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        map<int,int> mpp;
        int sum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[rem];
            }
            mpp[sum]++;
        }
        return count;
    }
};