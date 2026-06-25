class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mpp;

        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            if(mpp.find(nums2[i])!=mpp.end()){
                return nums2[i];
            }
        }

        return -1;
    }
};