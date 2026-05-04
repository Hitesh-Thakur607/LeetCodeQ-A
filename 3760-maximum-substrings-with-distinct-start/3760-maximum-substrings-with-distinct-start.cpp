class Solution {
public:
    int maxDistinct(string s) {
        vector<int>abc(26,0);
        int count=0;
        for(int i=0;i<s.size();i++){
            abc[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(abc[i]>0){
                count++;
            }
        }
        return count;
    }
};