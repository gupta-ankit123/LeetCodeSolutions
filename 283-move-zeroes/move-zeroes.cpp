class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        int i=0;
        int j=0;

        while(j<n){
            if(nums[j]==0){
                j++;
            }
            else{
                int x=nums[i];
                nums[i]=nums[j];
                nums[j]=x;
                j++;
                i++;
            }
        }

    }
};