class Solution {
public:
    int getMax(vector<int>& weights){
        int n=weights.size();
        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            maxi=max(maxi,weights[i]);
        }
        return maxi;
    }
    int sum(vector<int>& weights){
        int sum=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        return sum;
    }
    int solve(vector<int>& weights, int t){
        int d=1;
        int load=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(load+weights[i]>t){
                d++;
                load=weights[i];
            }
            else{
                load=load+weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=getMax(weights);
        int e=sum(weights);

        while(s<=e){
            int mid=(s+e)/2;
            int needed=solve(weights,mid);
            if(needed<=days){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};