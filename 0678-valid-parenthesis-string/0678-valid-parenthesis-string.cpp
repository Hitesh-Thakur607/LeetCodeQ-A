class Solution {
public:
vector<vector<int>>dp;
bool balance(string s,int count,int idx){
      if (count < 0)
            return false;

    if(idx==s.size()){
        return count==0;
    }
    if(dp[idx][count]!=-1){
        return dp[idx][count];
    }
    if(s[idx]=='('){
        if(balance(s,count+1,idx+1)){
            return dp[idx][count]=true;
        }
    }
    else if(s[idx]==')'){
        if(balance(s,count-1,idx+1)){
            return dp[idx][count]=true;
        }
    }
    else if(s[idx]=='*'){
        return dp[idx][count] =balance(s, count, idx + 1)||balance(s, count + 1, idx + 1)||balance(s, count - 1, idx + 1);
    }
    return dp[idx][count]=false;
}
    bool checkValidString(string s) {
        dp.resize(s.size(),vector<int>(s.size(),-1));
        return balance(s,0,0);
    }
};