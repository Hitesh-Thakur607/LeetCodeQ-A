class Solution {
public:
vector<int>dp;
bool reached(vector<int>& nums,int idx){
    if(idx>=nums.size()){
        return false;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    if(idx==nums.size()-1){
        return true;
    }
    for(int i=1;i<=nums[idx];i++){
        if(reached(nums,idx+i)){
            return  dp[idx]=true;
        }
    }
    // dp[idx]=0;
    return dp[idx]=false;
}
    bool canJump(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return reached(nums,0);
    }
};