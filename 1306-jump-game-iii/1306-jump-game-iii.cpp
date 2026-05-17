class Solution {
public:
bool isfound(vector<int>& arr,int start,vector<bool>&visited){
    if(start>=arr.size()||start<0){
        return false;
    }
    if(visited[start]){
        return false;
    }
    visited[start]=true;
    int val=arr[start];
    return arr[start]==0||isfound(arr,start-val,visited)||isfound(arr,start+val,visited)?true:false;
}
    bool canReach(vector<int>& arr, int start) {
        vector<bool>visited(arr.size(),false);
        return isfound(arr,start,visited);
    }
};