class Solution {
public:
    bool isPrime(int n){
        if (n <= 1) return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int nonSpecialCount(int l, int r) {
        int cnt = 0;
        int start = ceil(sqrt(l));
        int end = floor(sqrt(r));

        for (int i = start; i <= end; i++) {
            int square = i * i;
            if (square >= l && square <= r && isPrime(i)) {
                cnt++;
            }
        }

        return (r - l + 1) - cnt;
    }
};