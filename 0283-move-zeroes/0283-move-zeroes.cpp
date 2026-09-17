class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0&&zero==-1){
                zero=i;
            }
            else if(nums[i]!=0&&zero!=-1){
                swap(nums[i],nums[zero]);
                zero++;
            }
        }
    }
};