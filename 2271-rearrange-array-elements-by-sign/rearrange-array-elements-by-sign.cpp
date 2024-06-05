class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);
        int even=0,odd=1;
        
        for(auto it:nums){
            if(it>0){
                ans[even]=it;
                even+=2;
            }
            else{
                ans[odd]=it;
                odd+=2;
            }
        }
        return ans;
    }
};