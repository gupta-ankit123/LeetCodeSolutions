class Solution {
public:
    bool check(vector<int>& nums) {
        int  n=nums.size();
        vector<int> res(n);

        for(int i=0;i<n;i++){
            int currIndex=0;
            for(int j=i;j<n;j++){
                res[currIndex]=nums[j];
                currIndex++;
            }
            for(int k=0;k<i;k++){
                res[currIndex]=(nums[k]);
                currIndex++;
            }

            bool isSorted=true;
            for(int l=0;l<n-1;l++){
                if(res[l]>res[l+1]){
                    isSorted=false;
                    break;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};