class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(nums[i]<0 && nums[j]>0){
            int neg=abs(nums[i]);
            int pos=abs(nums[j]);
            if(neg==pos){
                return pos;
            }
            else if(pos>neg){
                j--;
            }
            else{
                i++;
            }
        }
        return -1;
        
    }
};