class Solution {
public:
// -4 -1 -1 -1 0  2
void find(vector<vector<int>>&ans,int j,vector<int>& nums){
    int front=j+1;
    int back=nums.size()-1;
    while(front<back){
        if(front-1!=j&&nums[front]==nums[front-1]){
            front++;
            continue;
        }
        if(back+1<nums.size()&&nums[back]==nums[back+1]){
            back--;
            continue;
        }
        if(front==j){
            front++;
            continue;
        }
        if(nums[front]+nums[back]+nums[j]==0){
            ans.push_back({nums[j],nums[front],nums[back]});
            front++;
            back--;
        }
        else if(nums[front]+nums[back]+nums[j]<0){
            front++;
        }
        else{
            back--;
        }
    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(i==0){
             find(ans,i,nums);
            }
        else if(i>0&&nums[i]!=nums[i-1]){
            find(ans,i,nums);
        }
       } 
       return ans;
    }
};