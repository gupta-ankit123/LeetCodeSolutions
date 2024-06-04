class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(map.find(rem)!=map.end()){
                ans.push_back(i);
                ans.push_back(map[rem]);
            }
            map[nums[i]]=i;
        }
        return ans;
    }
};