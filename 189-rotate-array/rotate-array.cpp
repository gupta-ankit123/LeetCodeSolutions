class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=1 || k==0 || k==n){
            return;
        }
        
        if(k>n){
         k=k%n;

        }
        vector<int> ans;
        for(int i=n-k;i<n;i++){
             ans.push_back(nums[i]);
        }

        for(int i=0;i<=n-k;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
        
    }
};