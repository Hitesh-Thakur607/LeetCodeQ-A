class Solution {

    List<List<Integer>> tempo = new ArrayList<>();
   void combi(int[] candidates, int target, int sum, List<Integer> anso, int idx) {
        if (sum > target) return;
        if (sum == target) {
            tempo.add(new ArrayList<>(anso));
            return;
        }
        for (int i = idx; i < candidates.length; i++) {

            if (i > idx && candidates[i] == candidates[i-1]) continue;

            anso.add(candidates[i]);
            combi(candidates, target, sum + candidates[i], anso, i + 1);
            anso.remove(anso.size() - 1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        combi(candidates, target, 0, new ArrayList<>(), 0);
        return tempo;
    }
}