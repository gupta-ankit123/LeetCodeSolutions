class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> ans;
        int n=nums.size();
        int d=floor(n/3)+1;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==d) ans.push_back(nums[i]);
        }
        return ans;
    }
};