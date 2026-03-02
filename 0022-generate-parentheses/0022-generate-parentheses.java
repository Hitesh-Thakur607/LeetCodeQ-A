class Solution {

    void allparent(HashSet<String> ans1, StringBuilder ans, int size,
                   int openCount, int closeCount) {
        if (closeCount > openCount) return;
        if (ans.length() == size) {
            if (openCount == closeCount) {
                ans1.add(ans.toString());
            }
            return;
        }
            ans.append('(');
            allparent(ans1, ans, size, openCount + 1, closeCount);
             ans.deleteCharAt(ans.length() - 1);
              ans.append(')');
            allparent(ans1, ans, size, openCount, closeCount + 1);
            ans.deleteCharAt(ans.length() - 1);
    }
    public List<String> generateParenthesis(int n) {
        HashSet<String> ans1 = new HashSet<>();
        String temp = "";
        for (int i = 0; i < n; i++) temp += "()";
        allparent(ans1, new StringBuilder(), temp.length(), 0, 0);
        return new ArrayList<>(ans1);
    }
}