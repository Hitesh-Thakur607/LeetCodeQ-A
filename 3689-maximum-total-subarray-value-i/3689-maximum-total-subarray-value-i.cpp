class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=nums[i]<mini?nums[i]:mini;
            maxi=nums[i]>maxi?nums[i]:maxi;
        }
        return (maxi-mini)*k;
    }
};