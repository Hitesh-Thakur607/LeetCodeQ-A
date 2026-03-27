class Solution {
public:
// vector<int>dp;
int findcount(vector<int>&nums,int tar,int curr,int count,int idx){
    if(curr==tar&&count==nums.size()){
        return 1;
    }
    if(idx>=nums.size()){
        return 0;
    }
    if(count>=nums.size()){
        return 0;
    }
    int minus=findcount(nums,tar,curr-nums[idx],count+1,idx+1);
    int plus=findcount(nums,tar,curr+nums[idx],count+1,idx+1);
    // cout<<minus+plus<<endl;
    return minus+plus;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        // dp.resize(nums.size()+1,-1);
        return findcount(nums,target,0,0,0);
    }
};