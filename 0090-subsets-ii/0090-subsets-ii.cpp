class Solution {
public:
void subset(vector<int>nums,vector<vector<int>>&ans,int idx,vector<int>tempans){
    if(idx>nums.size()){
        ans.push_back(tempans);
        return ;
    }
    ans.push_back(tempans);
    for(int i=idx;i<nums.size();i++){
        if(idx!=i&&i>0&&nums[i]==nums[i-1])continue;
        tempans.push_back(nums[i]);
        subset(nums,ans,i+1,tempans);
        tempans.pop_back();
    }
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>tempans;
        subset(nums,ans,0,tempans);
        return ans;
    }
};
