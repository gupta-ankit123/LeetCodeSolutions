class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> ans;
        int x=floor(n/3);
        for(auto it:mpp){
            if(it.second>x){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};