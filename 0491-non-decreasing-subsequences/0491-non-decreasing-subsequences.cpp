class Solution {
public:
vector<vector<int>>ans;
set<vector<int>>arr;
void subsq(vector<int>&nums,vector<int>&temp,int lastval,int index){
    if(temp.size()>=2){
        if(arr.find(temp)==arr.end()){
            arr.insert(temp);
            ans.push_back(temp);
        }
    }
    if(index>=nums.size()){
        return ;
    }
    for(int i=index;i<nums.size();i++){
        if(lastval<=nums[i]||lastval==INT_MIN){
            temp.push_back(nums[i]);
            subsq(nums,temp,nums[i],i+1);
            temp.pop_back();
        }
    }
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        subsq(nums,temp,INT_MIN,0);
        return ans;
    }   
};