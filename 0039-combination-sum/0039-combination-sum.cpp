class Solution {
public:
set<vector<int>> finalans;
vector<vector<int>>tempo;
void combi(vector<int>& candidates,int target,int sum,vector<int>&anso){
    if(sum>target){
        return ;
    }
    else if(sum==target){
        vector<int>newans=anso;
        sort(newans.begin(),newans.end());
        if(finalans.find(newans)==finalans.end()){
            finalans.insert(newans);
            tempo.push_back(anso);
        }
        return ;
    }
    for(int i=0;i<candidates.size();i++){
        anso.push_back(candidates[i]);
        combi(candidates,target,sum+candidates[i],anso);
        anso.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>anso;
        combi(candidates,target,0,anso);
        return tempo;
    }
};