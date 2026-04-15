class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        if(target<nums[0]){
            return 0;
        }

        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;
            }
        }
        if(target>nums[e]){
            return e+1;
        }

        return e-1;
    }
};