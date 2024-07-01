class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap;

        for(int i=0;i<piles.size();i++){
            maxHeap.push(piles[i]);
        }

        while(k--){
            int temp=maxHeap.top();
            maxHeap.pop();
            temp=temp-floor(temp/2);
            maxHeap.push(temp);
        }
        int sum=0;
        while(!maxHeap.empty()){
            int top=maxHeap.top();
            maxHeap.pop();
            sum+=top;
        }
        return sum;
    }
};