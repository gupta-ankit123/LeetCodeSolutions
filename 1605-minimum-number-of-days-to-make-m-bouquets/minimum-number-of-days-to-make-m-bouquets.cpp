class Solution {
public:
    int getMin(vector<int>& bloomDay){
        int mini=INT_MAX;
        int n=bloomDay.size();

        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
        }
        return mini;
    }

    int getMax(vector<int>& bloomDay){
        int maxi=INT_MIN;
        int n=bloomDay.size();

        for(int i=0;i<n;i++){
            maxi=max(maxi,bloomDay[i]);
        }
        return maxi;
    }
    bool possible(vector<int>& bloomDay, int x,int m, int k){
        int n=bloomDay.size();
        int cnt=0;
        int b=0;

        for(int i=0;i<n;i++){
            if(bloomDay[i]<=x){
                cnt++;
            }
            else{
                b+=(cnt/k);
                cnt=0;
            }
        }
        b+=cnt/k;
        if(b>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>(long long)n) return -1;

        int s=getMin(bloomDay);
        int e=getMax(bloomDay);
        int ans=-1;

        while(s<=e){
            int mid=(s+e)/2;
            if(possible(bloomDay,mid,m,k)){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};