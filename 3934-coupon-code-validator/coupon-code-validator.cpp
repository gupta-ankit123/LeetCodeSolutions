class Solution {
public:
    bool correctCode(string code){
        regex pattern("^[A-Za-z0-9_]+$");
        return regex_match(code,pattern);
    }
    bool correctBusiness(string business){
        if(business=="electronics" || business=="grocery" || business=="pharmacy" || business=="restaurant"){
            return true;
        }
        return false;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<string> ans;
        unordered_map<string,int>mpp={
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };
        vector<pair<int ,string>> temp;
        for(int i=0;i<n;i++){
            if(correctCode(code[i]) && correctBusiness(businessLine[i]) && isActive[i]){
                temp.push_back({mpp[businessLine[i]],code[i]});
            }
        }
        sort(temp.begin(),temp.end());
        for(auto &it:temp){
            ans.push_back(it.second);
        }
        return ans;
    }
};