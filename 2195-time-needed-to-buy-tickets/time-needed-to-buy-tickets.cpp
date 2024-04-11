class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        int time=0;
        int n=nums.size();
       while(nums[k]){
         for(int i=0;i<n;i++)
        {   if(nums[i]>0) time++;
           
            nums[i]--;
            if(nums[k]==0)break;
        }
       }
       return time;
        //     if(i<=k)
        //     {
        //         time+=min(tickets[i],tickets[k]);
        //     }
        //     else
        //     {
        //         time+=min(tickets[i],tickets[k]-1);
        //     }
        // }
        return time;
    }
};