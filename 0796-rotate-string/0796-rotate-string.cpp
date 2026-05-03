class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=1;i<s.size();i++){
            string temp=s;
            reverse(temp.begin(),temp.end());
            reverse(temp.begin(),temp.end()-i);
            reverse(temp.end()-i,temp.end());
            if(temp==goal){
                return true;
            }
        }
        return false;
    }
};