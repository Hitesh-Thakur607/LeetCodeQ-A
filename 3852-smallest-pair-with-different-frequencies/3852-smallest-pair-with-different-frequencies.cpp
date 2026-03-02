class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>count;
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]!=val&&count[val]!=count[nums[j]]&&val<nums[j]){
                    ans.push_back({val,nums[j]});
                }
            }
        }
        sort(ans.begin(),ans.end());
        if(!ans.empty()){
            return {ans[0].first,ans[0].second};
        }
        return {-1,-1};
    }
};
// 1 3
// 1 4
// 2 4
// 2 3