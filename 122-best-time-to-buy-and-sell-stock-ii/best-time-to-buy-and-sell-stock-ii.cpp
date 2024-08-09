class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int aheadBuy,aheadNotBuy,currBuy,currNotBuy;
        aheadBuy=aheadNotBuy=0;
        for(int ind=n-1;ind>=0;ind--){
            currBuy=max(-prices[ind]+aheadNotBuy,aheadBuy); 
            currNotBuy=max(prices[ind]+aheadBuy,aheadNotBuy); 
            aheadBuy=currBuy;
            aheadNotBuy=currNotBuy;     
        }
        return currBuy; 
    }
};