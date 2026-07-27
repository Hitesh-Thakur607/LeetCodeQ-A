class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxlength=0;
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(mpp.find(sum)!=mpp.end()){
                maxlength=max(maxlength,(i-mpp[sum]));
            }
            else{
                mpp[sum]=i;
            }
        }
        return maxlength;
    }
};