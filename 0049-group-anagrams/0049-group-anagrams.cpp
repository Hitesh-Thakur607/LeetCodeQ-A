class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<vector<int>, vector<int>> xy;
         vector<vector<string>>anso; 
        for(int i=0;i<strs.size();i++){
            vector<int>ans(26,0);
            for(int k=0;k<strs[i].size();k++){
                ans[strs[i][k]-'a']++;
            }
            xy[ans].push_back(i);
        }
        for(auto it:xy){
            vector<string> group;
            for(int i=0;i<it.second.size();i++){
                group.push_back(strs[it.second[i]]);
            }
            anso.push_back(group);
        }
        return anso;
    }
};