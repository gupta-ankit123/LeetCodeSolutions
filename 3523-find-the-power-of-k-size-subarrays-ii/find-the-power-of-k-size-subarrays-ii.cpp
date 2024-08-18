class Solution {
public:

    bool isSorted(int i,int j,vector<int> &nums){
        for(int l=i+1;l<=j;l++){
            if(nums[l-1]+1!=nums[l]){
                return false;
            }
        }
        return true;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=k-1;
        vector<int> ans;
        bool flag=true;
        while(j<n){
            if(flag){
                if(isSorted(i,j,nums)){
                    ans.push_back(nums[j]);
                    flag=false;
                }
                else{
                    ans.push_back(-1);
                }
            }
            else{
                if(nums[j-1]+1==nums[j]){
                    ans.push_back(nums[j]);
                }

                else{
                    while(i<j){
                        ans.push_back(-1);
                        i++;
                        if(i+k-1>=n) break;
                    }
                    flag=true;
                    j=j+k-1;
                    continue;
                }
                
            }
            i++;
            j++;
        }
        return ans;
    }
};