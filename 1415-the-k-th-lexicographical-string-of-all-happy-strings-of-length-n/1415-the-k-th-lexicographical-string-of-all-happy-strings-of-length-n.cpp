class Solution {
public:
void dfs(vector<string>&res,string s,int& n,string &aim){
    if(s.size()==n){
        res.push_back(s);
        return;
    }
    for(int i=0;i<aim.size();i++){
        if(s.size()>0&&s[s.size()-1]==aim[i]){
            continue;
        }
        dfs(res,s+aim[i],n,aim);
    }
}
    string getHappyString(int n, int k) {
        vector<string>x;
        string main="abc";
        dfs(x,"",n,main);
        sort(x.begin(),x.end());
        return x.size()>=k?x[k-1]:"";
    }
};