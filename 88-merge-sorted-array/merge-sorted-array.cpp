class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=m-1;//2 1 0
     int j=n-1;//2 1 0 -1
     int k=m+n-1;//5 4 3 2 1 0

     while(i>=0 && j>=0){
         if(nums1[i]>=nums2[j]){
             nums1[k]=nums1[i];
             i--;
             k--;
         }
         else{
             nums1[k]=nums2[j];     //2 2 3 5 6
             j--;
             k--;
         }
     }
     while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
     }
    }
};