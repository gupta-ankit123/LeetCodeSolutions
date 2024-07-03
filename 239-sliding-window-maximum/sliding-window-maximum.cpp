class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int> ans;

        //push the first k elements in the heap
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});

        }
        //first window ka max 
        ans.push_back(pq.top().first);

        //now consider the rest of the window
        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});

            //remove the maximum element from the heap if it belongs to the previous window
            while(pq.top().second<=i-k){
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }
        return ans;

    }
};