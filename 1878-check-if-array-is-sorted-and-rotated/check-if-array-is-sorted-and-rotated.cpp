class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> res=nums;
        sort(res.begin(),res.end());

        for(int i=0;i<n;i++){
            bool isSorted=true;
            for(int j=0;j<n;j++){
                if(nums[j]!=res[(j+i)%n]){
                    isSorted=false;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};