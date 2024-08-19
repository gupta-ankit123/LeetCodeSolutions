class Solution {
public:
    int solve(vector<int> &nums,int k){
        if(k<0) return 0;
        int n=nums.size();
        int l=0,r=0,cnt=0,odd=0;
        while(r<n){
            odd+=nums[r]%2;
            while(odd>k){
                odd-=nums[l]%2;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};