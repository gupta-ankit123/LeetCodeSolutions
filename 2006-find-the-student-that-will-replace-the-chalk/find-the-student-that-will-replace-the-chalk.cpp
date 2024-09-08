class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        while(k>sum){
            k=k-sum;
        }
        if(k==0) return 0;
        long long ans=0;
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>k){
                ans=i;
                break;
            }
            k=k-chalk[i];
        }
        return ans;
    }
};