class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            string st=details[i];
            int st1=st[11]-'0';
            int st2=st[12]-'0';
            int age=st1*10+st2;
            if(age>60){
                count++;
            }
        }
        return count;
    }
};