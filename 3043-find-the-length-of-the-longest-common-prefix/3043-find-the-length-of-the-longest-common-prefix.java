class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        HashSet<String> ans = new HashSet<>();
        int size = 0;
        for (int i = 0; i < arr1.length; i++) {
            int num = arr1[i];
            while (num > 0) {
                ans.add(String.valueOf(num));
                num = num / 10;
            }
        }
        for (int i = 0; i < arr2.length; i++) {
            int num = arr2[i];
            while (num > 0) {
                if (ans.contains(String.valueOf(num))) {
                    size = Math.max(size, String.valueOf(num).length());
                }
                num = num / 10;
            }
        }
        return size;
    }
}