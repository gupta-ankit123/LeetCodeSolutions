class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       stack<int> st;
       
       int ans=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            st.push(nums[i]);
        }
        else{
            int size=st.size();
            ans=max(ans,size);
            while(!st.empty()){
                st.pop();
            }
        }
       }
       int size=st.size();
       return max(ans,size);
    }
};