class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=0;
        for(int i=0;i<word.length();i++){
            if(ch==word[i]){
                int j=0;
        while(j<=ind){
            swap(word[j],word[ind]);
            j++;
            ind--;
        }
        return word;
            }
            else{
                ind++;
            }
        }
        return word;
        
    }
};