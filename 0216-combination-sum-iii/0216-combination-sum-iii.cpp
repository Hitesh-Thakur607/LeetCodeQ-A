class Solution {
public:
void combi(vector<vector<int>>&ans,vector<int>&temp,int goal,int k,int idx,int sum ){
    if(goal==sum&&temp.size()==k){
        ans.push_back(temp);
        return ;
    }
    if(goal<sum||temp.size()>k||idx>9){
        return ;
    }
    for(int i=idx;i<10;i++){
        temp.push_back(i);
        combi(ans,temp,goal,k,i+1,sum+i);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        combi(ans,temp,n,k,1,0);
        return ans;
    }
};