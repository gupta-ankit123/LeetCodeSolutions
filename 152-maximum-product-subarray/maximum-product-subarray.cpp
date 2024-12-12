class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int prod=nums[i];
            maxi=max(maxi,prod);
            for(int j=i+1;j<n;j++){
                
                prod=prod*nums[j];
                maxi=max(maxi,prod);
            }
        }
        return maxi;
    }
};