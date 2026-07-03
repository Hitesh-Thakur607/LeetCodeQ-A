class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int>mpp;
        unordered_map<int,int>mpp1;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])==mpp.end()){
                mpp[s[i]]=t[i];
            }
            else if(mpp[s[i]]!=t[i]){
                return false;
            }
            if(mpp1.find(t[i])==mpp1.end()){
                mpp1[t[i]]=s[i];
            }
            else if(mpp1[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};