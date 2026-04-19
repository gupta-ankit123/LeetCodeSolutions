class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=nums.size();
        int occ=0;
        int m=queries.size();
        vector<int> ans;

        map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                mpp[occ]=i;
                occ++;
                
            }
        }

        for(int i=0;i<m;i++){
            int k=queries[i]-1;
            if(mpp.find(k)!=mpp.end()){
                ans.push_back(mpp[k]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};