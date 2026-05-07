class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>abc(26,0);
        int change=0;
        vector<int>abcd(26,0);
        for(char c:s){
            abc[c-'a']++;
        }
        for(char c:t){
            abcd[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(abc[i]>abcd[i]){
                change+=abc[i]-abcd[i];
            }   
        }
        return change;
    }
};