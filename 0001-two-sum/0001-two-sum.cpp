class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp.push_back({nums[i],i});
        }
        sort(mpp.begin(),mpp.end());
        int last=nums.size()-1;
        int first=0;
        while(first<last){
            int sum=mpp[first].first+mpp[last].first;
            if(sum==target){
                return {mpp[first].second,mpp[last].second};
            }
            if(sum<target){
                first++;
            }
            else{
                last--;
            }
        }
        return {0,0};
    }
};