class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> mpp;
        int sum=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            
            count+=mpp[rem];
            
            mpp[sum]++;
        }
        return count;
    }
};