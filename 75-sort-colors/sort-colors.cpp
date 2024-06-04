class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0,zero=0,two=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]==1){
                one++;
            }
            if(nums[i]==2){
                two++;
            }
        }

        int i=0;
        while(zero--){
            nums[i]=0;
            i++;
        }
        while(one--){
            nums[i]=1;
            i++;
        }
        while(two--){
            nums[i]=2;
            i++;
        }
    }
};