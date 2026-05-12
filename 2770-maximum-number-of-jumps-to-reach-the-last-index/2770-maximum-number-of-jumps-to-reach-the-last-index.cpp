class Solution {
public:
    vector<int> dp;

    int jumps(int index, vector<int>& nums, int target) {

        if(index == nums.size() - 1){
            return 0;
        }

        if(dp[index] != -2){
            return dp[index];
        }

        int maxi = -1;

        for(int i = index + 1; i < nums.size(); i++){

            if(abs(nums[i] - nums[index]) <= target){

                int val = jumps(i, nums, target);

                if(val != -1){
                    maxi = max(maxi, val);
                }
            }
        }

        if(maxi == -1){
            return dp[index] = -1;
        }

        return dp[index] = 1 + maxi;
    }

    int maximumJumps(vector<int>& nums, int target) {

        dp.resize(nums.size(), -2);

        return jumps(0, nums, target);
    }
};