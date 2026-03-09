class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s[0]=='0'){
            return false;
        }
        bool find=false;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'&&find&&count==0){
                return false;
            }
            else if(s[i]=='1'){
                count++;
                find=true;
            }
            else count=0;
        }
        return true;
    }
};