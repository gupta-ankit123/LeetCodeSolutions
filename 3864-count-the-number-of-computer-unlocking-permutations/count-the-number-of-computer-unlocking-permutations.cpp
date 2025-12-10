class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n=complexity.size();
        long long ans=1;
        int mod=1e9+7;
        if(*min_element(complexity.begin()+1,complexity.end())<=complexity[0]){
            return 0;
        }
        for(int i=1;i<n;i++){
            ans=(ans*i)%mod;
        }
        return ans;
    }
};