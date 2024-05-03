class Solution {
public:
    int compareVersion(string version1, string version2) {
        int m=version1.length();
        int n=version2.length();

        for(int i=0,j=0;i<m||j<n;i++,j++){
            int x1=0,x2=0;
            while((i<m) && (version1[i]!='.')){
                x1=x1*10+(version1[i++]-'0');
                
            }
            while((j<n) && (version2[j]!='.')){
                x2=x2*10+(version2[j++]-'0');
                
            }
            if(x1<x2) return -1;
            if(x1>x2) return 1;
        }
        return 0;

    }
};