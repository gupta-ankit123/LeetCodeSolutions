class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        int first=1;
        int second=1;
        for(int i=0;i<n;i++){
            if(first==0) first=1;
            if(second==0) second=1;
            first=first*nums[i];
            second=second*nums[n-i-1];
            maxi=max(maxi,max(first,second));
        }
        return maxi;
    }
};