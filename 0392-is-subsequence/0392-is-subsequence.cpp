class Solution {
public:
bool check(string& s,string& t,int idx,int index){
    if(index==t.size()){
        return false;
    }
    if(idx==s.size()-1&&s[idx]==t[index]){
        return true;
    }
    if(s[idx]==t[index]){
        cout<<idx<<" "<<index<<endl;
        return check(s,t,idx+1,index+1);
    }
    return check(s,t,idx,index+1);

}
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size()){
            return false;
        }
        if(s.empty()){
            return true;
        }
        return check(s,t,0,0);
    }
};