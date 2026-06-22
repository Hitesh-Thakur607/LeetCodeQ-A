class Solution {
public:
    int maxNumberOfBalloons(string s) {
        string target="balloon";
        vector<bool> marking(s.size(), false);
        vector<int> counting(26, 0);
        for (int i = 0; i < target.size(); i++) {
            counting[target[i] - 'a']++;
        }
        int maxcount = 0;
        for (int i = 0; i < s.size(); i++) {
            int counti = 0;
            vector<int> count = counting;
            for (int j = i; j < s.size(); j++) {
                if (!marking[j] && count[s[j] - 'a'] > 0) {
                    count[s[j] - 'a'] -= 1;
                    marking[j] = true;
                    counti++;
                }
            }
            if (counti == target.size()) {
                    maxcount++;
                }
        }
        return maxcount;
    }
};