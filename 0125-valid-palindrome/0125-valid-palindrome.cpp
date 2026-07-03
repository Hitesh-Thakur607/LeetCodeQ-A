class Solution {
public:
bool check(string &s,int start,int end){
    if(start>=s.size()||end<0){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return check(s,start+1,end-1); 
}
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        string newone="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
                newone+=tolower(s[i]);
            }
        }
        if(newone.empty()){
            return true;
        }
        return check(newone,0,newone.size()-1);
    }
};