class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int count=0;
        while(numBottles>=numExchange){
            int newBottle=numBottles/numExchange;
            int rem=numBottles%numExchange;
            count+=newBottle;
            numBottles=newBottle+rem;
        }
        
        return ans+count;
    }
};