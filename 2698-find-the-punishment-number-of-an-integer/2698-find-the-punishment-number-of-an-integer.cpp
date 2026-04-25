class Solution {
public:
bool check(string g,int idx,int sum,int j){
    if(idx==g.size()&&sum==j){
        return true;
    }
    if(idx>=g.size()){
        return false;
    }
    string temp="";
    for(int i=idx;i<g.size();i++){
        temp+=g[i];
        if(check(g,i+1,sum+stoi(temp),j)){
            return true;
        }
    }
    return false;
}
    int punishmentNumber(int n) {
        int sum=1;
        for(int i=2;i<=n;i++){
            int num=i*i;
            string g=to_string(num);
            if(check(g,0,0,i)){
                sum+=num;
            }
        }
        return sum;
    }
};  
// 1 2 9 6
