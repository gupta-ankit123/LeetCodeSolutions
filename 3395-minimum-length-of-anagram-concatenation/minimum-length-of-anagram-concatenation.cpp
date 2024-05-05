class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.length();

        // Iterate through possible lengths of 't'
        for (int len = 1; len <= n; ++len) {
            if (n % len == 0) {  // Check only divisors of n
                bool allAnagrams = true;
                // Check if all blocks of length 'len' are anagrams
                for (int i = 0; i < n; i += len) {
                    string block = s.substr(i, len);
                    sort(block.begin(), block.end());
                    if (i > 0) {
                        string prevBlock = s.substr(i - len, len);
                        sort(prevBlock.begin(), prevBlock.end());
                        if (block != prevBlock) {
                            allAnagrams = false;
                            break;
                        }
                    }
                }
                if (allAnagrams) {
                    return len;  // Found the minimum length of 't'
                }
            }
        }
        return n;
        
    }
};