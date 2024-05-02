class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        //first k elements ko process karte hai
        for(int i=0;i<k;i++){
            //chote elements ko remove  kardo 
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //inserting index so that we can check , out of window element
            dq.push_back(i);
           
        }
        //store answer for first window
        ans.push_back(nums[dq.front()]);

        //remaining window ko proces karo
        for(int i=k;i<nums.size();i++){
            //out of window element ko remove kardia
            if(!dq.empty()&& i-dq.front()>=k){
                dq.pop_front();
            }
            //ab firse current element ke liye chote element ko remove kjarna hai
             while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            //inserting index so that we can check , out of window element
            dq.push_back(i);

            ans.push_back(nums[dq.front()]);

        }
        return ans;
        
    }
};