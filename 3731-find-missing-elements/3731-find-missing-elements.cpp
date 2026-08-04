class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>array;
        vector<int>ans;
        int start=nums[0];
        int end=nums[nums.size()-1];
        for(int i=start;i<=end;i++){
            array.push_back(i);
        }
        int j=0;
        for(int i=0;i<array.size();i++){
            if(j>0&&nums[j]==nums[j-1]){
                continue;
            }
            else if(nums[j]==array[i]){
                j++;
            }
            else{
                ans.push_back(array[i]);
            }
        }
        return ans;
    }
};
// 1 2 3 4 5
// 1 5