class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod=(1e9+7);
        vector<int> temp;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                temp.push_back(sum);
            }
        }

        sort(temp.begin(),temp.end());
        long long sum=0;
        for(int i=left-1;i<right;i++){
            sum+=temp[i];
        }
        return sum%mod;
    }
};