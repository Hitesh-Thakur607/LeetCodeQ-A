class Solution {
public:
vector<vector<int>>numo;
void find(int start, int end, vector<int>& temp, int curr) {
    if (start >= end)
        return;
    int a = temp[curr];
    int b = temp[start];
    int c = temp[end];
    int sum = a + b + c;
    if(start-1!=curr&&temp[start-1]==temp[start]){
        find(start+1,end,temp,curr);
    }
    else if(end+1<temp.size()-1&&temp[end+1]==temp[end]){
        find(start,end-1,temp,curr);
    }
    else if (sum == 0) {
        numo.push_back({a, b, c});
        find(start + 1, end - 1, temp, curr);
    }
    else if (sum > 0) {
        find(start, end - 1, temp, curr);
    }
    else {
        find(start + 1, end, temp, curr);
    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==0){
                find(i+1,nums.size()-1,nums,i);
            }
            else if(nums[i]!=nums[i-1]){
                find(i+1,nums.size()-1,nums,i);
            }
        }
        return numo;
    }
};