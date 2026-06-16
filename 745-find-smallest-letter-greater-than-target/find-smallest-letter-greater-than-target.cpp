class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int n=letters.size();
        int e=n-1;
        char ans=letters[0];
        // if(target-'0'=='z'-'0') return letters[0];
        while(s<=e){
            int mid=(s+e)/2;
            if(letters[mid]-'0'>target-'0') ans=letters[mid];
            if(letters[mid]-'0'<=target-'0') s=mid+1;
            else e=mid-1;
        }
        return ans;
    }
};