class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<vector<double>> ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                ans.push_back({arr[i]*1.0/arr[j]*1.0,arr[i]*1.0,arr[j]*1.0});
            }
        }
        sort(ans.begin(),ans.end());
        int first=ans[k-1][1];
        int second=ans[k-1][2];

        return {first,second};
        
        
    }
};