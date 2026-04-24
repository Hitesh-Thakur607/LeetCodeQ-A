class Solution {
public:
vector<string>ans;
unordered_set<string>check;
void Case(string s,string t,int idx){  
    if(idx==s.size()){
        if(check.find(t)!=check.end()){
            return ;
        }
        ans.push_back(t);
        check.insert(t);
        return ;
    }
    char a=s[idx];
    char b=tolower(a);
    Case(s,t+b,idx+1);
     b=toupper(a);
    Case(s,t+b,idx+1);
}
    vector<string> letterCasePermutation(string s) {
        Case(s,"",0);
        return ans;
    }
};