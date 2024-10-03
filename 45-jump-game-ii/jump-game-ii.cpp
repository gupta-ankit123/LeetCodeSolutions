class Solution {
public:

    int jump(vector<int>& nums) {
       int n=nums.size();
       vector<int>jumps(n,INT_MAX);
    //    if(n==0 ||nums[0]==0) return INT_MAX;
       jumps[0]=0;

       for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i<=j+nums[j]){
                jumps[i]=min(jumps[i],jumps[j]+1);
                
            }
        }
       }
       return jumps[n-1];
    }
};

