class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int curr=0;
        vector<int> res=nums;
        if(n==1) return;
        k=k%n;

        for(int i=n-k;i<n;i++){
            nums[curr]=res[i];
            curr++;
        }
        for(int i=0;i<n-k;i++){
            nums[curr]=res[i];
            curr++;
        }

    }
};