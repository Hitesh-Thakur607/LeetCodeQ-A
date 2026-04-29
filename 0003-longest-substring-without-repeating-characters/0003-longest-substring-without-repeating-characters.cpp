class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int maxlength = 0;
        int left = 0;
        int start = 0;

        while (left < s.size()) {
            if (m[s[left]] > 0) {
                int right = start;
                while (right < s.size()) {
                    m[s[right]]--;
                    if (s[right] == s[left]) {
                        start = right + 1;
                        break;
                    }
                    right++;
                }
            }
            m[s[left]]++;
            maxlength = std::max(maxlength, left - start + 1);
            left++;
        }

        return maxlength;
    }
};
