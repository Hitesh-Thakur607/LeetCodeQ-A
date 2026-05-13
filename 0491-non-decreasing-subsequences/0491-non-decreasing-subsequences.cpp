class Solution {
public:
    vector<vector<int>> ans;
    void subsq(vector<int>& nums, vector<int>& temp, int index) {
        if (temp.size() >= 2) {
            ans.push_back(temp);
        }
        unordered_set<int> used; 
        for (int i = index; i < nums.size(); i++) {
            if ((!temp.empty() && nums[i] < temp.back()) || used.count(nums[i])) {
                continue;
            }
            used.insert(nums[i]);
            temp.push_back(nums[i]);
            subsq(nums, temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        subsq(nums, temp, 0);
        return ans;
    }
};