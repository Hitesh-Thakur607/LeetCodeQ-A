class Solution {
public:

vector<vector<int>> dp;

int permu(vector<int>& coins, int val, int idx){

    if(val == 0) return 1;
    if(val < 0) return 0;

    if(dp[val][idx] != -1)
        return dp[val][idx];

    int count = 0;

    for(int i = idx; i < coins.size(); i++){
        count += permu(coins, val - coins[i], i);
    }

    return dp[val][idx] = count;
}

int change(int amount, vector<int>& coins) {

    dp.resize(amount + 1, vector<int>(coins.size(), -1));

    return permu(coins, amount, 0);
}
};