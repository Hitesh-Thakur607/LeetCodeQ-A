class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string one=strs[0];
        string prefix="";
        for(int i=0;i<one.size();i++){
            char tocheck=one[i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=tocheck){
                    return prefix;
                }
            }
            prefix+=tocheck;
        }
        return prefix;
    }
};