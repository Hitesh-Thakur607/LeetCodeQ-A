class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> ans;
        int lastspace=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                break;
            }
            lastspace++;
        }
        string temp = "";
        for (int i = 0; i < s.size()-lastspace; i++) {
            if (temp.empty()&&s[i]!=' ') {
                temp += s[i];
            } else if (s[i] == ' ') {
                ans.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        if (!temp.empty()) {
            ans.push_back(temp);
        }
        cout << ans[ans.size() - 1] << endl;
        return ans[ans.size() - 1].size();
    }
};