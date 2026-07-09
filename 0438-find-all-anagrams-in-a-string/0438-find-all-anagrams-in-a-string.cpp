class Solution {
public:
    vector<int> findAnagrams(string p, string s) {
        vector<int>ans;
        vector<int>str1(26,0);
        vector<int>str2(26,0);
        int start=0;
        for(int i=0;i<s.size();i++){
            str1[s[i]-'a']++;
        }
        for(int i=0;i<p.size();i++){
            int curr=p[i]-'a';
            str2[curr]++;
            while(start<=i&&str2[curr]>str1[curr]){
                str2[p[start]-'a']--;
                start++;
            }
            if(str1==str2){
                ans.push_back(start);
            }
        }
        return ans;
    }
};