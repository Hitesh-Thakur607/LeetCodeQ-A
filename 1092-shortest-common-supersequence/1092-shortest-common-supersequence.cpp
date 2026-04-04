class Solution {
public:
    vector<vector<int>> memo;
    string str1, str2;
    int solve(int i, int j) {
        if (i >= str1.size() && j >= str2.size()) return 0;
        if (i >= str1.size()) return str2.size() - j;
        if (j >= str2.size()) return str1.size() - i;
        
        if (memo[i][j] != -1) return memo[i][j];
        
        if (str1[i] == str2[j]) {
            return memo[i][j] = 1 + solve(i + 1, j + 1);
        }
        int take1 = 1 + solve(i + 1, j);
        int take2 = 1 + solve(i, j + 1);
        return memo[i][j] = min(take1, take2);
    }
    string buildResult(int i, int j) {
        if (i >= str1.size() && j >= str2.size()) return "";
        if (i >= str1.size()) return str2.substr(j);
        if (j >= str2.size()) return str1.substr(i);
        if (str1[i] == str2[j]) {
            return str1[i] + buildResult(i + 1, j + 1);
        }
        int take1 = 1 + solve(i + 1, j);
        int take2 = 1 + solve(i, j + 1);
        
        if (take1 <= take2) {
            return str1[i] + buildResult(i + 1, j);
        } else {
            return str2[j] + buildResult(i, j + 1);
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        this->str1 = str1;
        this->str2 = str2;
        memo.resize(str1.size(), vector<int>(str2.size(), -1));
        return buildResult(0, 0);
    }
};