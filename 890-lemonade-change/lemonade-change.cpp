class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> mpp;
        
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                mpp[5]++;
            }

            if (bills[i] == 10) {
                if (mpp[5] == 0) return false;  

                mpp[10]++;
                mpp[5]--;
            }

            if (bills[i] == 20) {
                if (mpp[10] > 0 && mpp[5] > 0) {
                    mpp[10]--;
                    mpp[5]--;
                } else if (mpp[5] >= 3) {
                    mpp[5] -= 3;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
