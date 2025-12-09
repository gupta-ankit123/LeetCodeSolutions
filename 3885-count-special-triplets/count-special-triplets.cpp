class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        map<long long,long long> left;
        map<long long,long long>right;
        int n=nums.size();
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            right[nums[i]]++;
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            long long tgt=2* nums[i];
            right[nums[i]]--;
            cnt=(cnt+(left[tgt]*right[tgt])%mod)%mod;
            left[nums[i]]++;

        }
        return cnt%mod;
    }
};