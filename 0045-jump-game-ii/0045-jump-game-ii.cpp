class Solution {
public:
vector<int>dp;
int reached(vector<int>& nums,int idx){
    if(idx>=nums.size()){
        return -1;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    if(idx==nums.size()-1){
        return 0;
    }
    int mini=INT_MAX;
    for(int i=1;i<=nums[idx];i++){
        int val=reached(nums,idx+i);
            if(val!=-1){
                mini=min(val,mini);
            }
    }
    // dp[idx]=0;
    if(mini==INT_MAX){
        return dp[idx]=-1;
    }
    return dp[idx]=1+mini;
}
    int jump(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return reached(nums,0);        
    }
};

