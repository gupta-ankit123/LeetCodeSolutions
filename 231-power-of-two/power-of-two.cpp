class Solution {
public:
    string convertInBinary(int n){
        string res="";
        if(n==0) return "0";
        while(n>0){
            if(n%2==1) res+='1';
            else res+='0';
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0) return false;
       string binary=convertInBinary(n);
       for(int i=1;i<binary.length();i++){
        if(binary[i]=='1') return false;
       } 
       return true;
    }
};