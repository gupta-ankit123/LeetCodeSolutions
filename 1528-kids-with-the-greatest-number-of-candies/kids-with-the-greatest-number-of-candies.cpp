class Solution {
public:
    bool isMax(int num,vector<int>& candies){
        for(int i=0;i<candies.size();i++){
            if(num<candies[i]){
                return false;
            }
        }
        return true;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> res(n);

        for(int i=0;i<n;i++){
            candies[i]=candies[i]+extraCandies;
            if(!isMax(candies[i],candies)){
                res[i]=false;
                candies[i]-=extraCandies;
            }
            else{
                res[i]=true;
                candies[i]-=extraCandies;
            }
        }
        return res;
    }
};