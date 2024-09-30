class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
        
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                int sum=nums[l]+nums[r]+nums[i];
                if(sum==0){
                    vector<int> temp={nums[i],nums[l],nums[r]};
                    st.insert(temp);
                    l++;
                r--;
                    
                }

                else if(sum<0){
                    
                    l++;
                }
                else if(sum>0){
                   
                    r--;
                }
                
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    
        
    }
};