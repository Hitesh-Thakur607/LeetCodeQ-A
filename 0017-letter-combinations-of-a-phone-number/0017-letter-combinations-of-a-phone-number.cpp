class Solution {
public:
    void dfs(string digits, vector<string>& alpha, vector<string>& result,
             vector<char>& s, int index) {

        if (s.size() == digits.size()) {        // FIXED: compare with size, not string
            result.push_back(string(s.begin(), s.end()));
            return;
        }

        if (index >= digits.size()) return;     // OK

        int num = digits[index] - '0';

        for (int i = 0; i < alpha[num].size(); i++) {
            s.push_back(alpha[num][i]);
            dfs(digits, alpha, result, s, index + 1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};   // FIXED: handle empty input

        // FIXED: proper initialization of alpha
        vector<string> alpha = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;           // FIXED: should be vector<string>
        vector<char> s;
        int index = 0;

        dfs(digits, alpha, result, s, index);   // FIXED: correct argument order
        return result;                          // FIXED: must return result
    }
};
