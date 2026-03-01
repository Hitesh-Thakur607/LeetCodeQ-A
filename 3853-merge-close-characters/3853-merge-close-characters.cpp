class Solution {
public:
    string mergeCharacters(string s, int k) {
        int n = s.size();
        vector<bool> check(n, true);
        for (int i = 0; i < n; i++) {
            if (!check[i]) continue;
            bool checko=true;
            char curr = s[i];
            int temp = i + k;
            for (int j = i + 1; j < n && j <= temp; j++) {
                if(!check[j]){
                    temp++;
                }
                else if (check[j] && s[j] == curr) {
                    check[j] = false;
                    checko=false;
                    temp++;             
                }
            }
            if(!checko)i=-1;
            }

        string ans = "";
        for (int i = 0; i < n; i++) {
            if (check[i]) ans += s[i];
        }
        return ans;
    }
};