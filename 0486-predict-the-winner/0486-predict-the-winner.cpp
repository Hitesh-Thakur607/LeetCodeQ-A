class Solution {
public: 
int willwin(vector<int>&nums,int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return nums[j];
    }
    int first=nums[i]+min(willwin(nums,i+2,j),willwin(nums,i+1,j-1));
    int second=nums[j]+min(willwin(nums,i,j-2),willwin(nums,i+1,j-1));
    return max(first,second);
    
}
    bool predictTheWinner(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int player1=willwin(nums,0,nums.size()-1);
        return total-player1>player1?false:true;
    }
};