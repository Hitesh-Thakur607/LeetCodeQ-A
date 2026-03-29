class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<int>abcd(26,0);
        vector<int>abcd1(26,0);
        for(int i=0;i<4;i++){
            abcd[s1[i]-'a']++;
            abcd1[s2[i]-'a']++;
        }
        if(abcd!=abcd1)return false;
        if(s2[2]==s1[0]&&s2[0]==s1[2]||s2[0]==s1[0]&&s2[2]==s1[2])return true;
    return false;        
    }
};
