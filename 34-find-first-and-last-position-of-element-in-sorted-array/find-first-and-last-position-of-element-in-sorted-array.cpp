class Solution {
public:
    int last(vector<int>& nums, int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int res=-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                res=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return res;
    } 
    int first(vector<int>& nums, int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int res=-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                res=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return res;
    } 
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstO=first(nums,target);
        if(firstO==-1) return {-1,-1};
        int lastO=last(nums,target);
        return {firstO,lastO};
    }
};