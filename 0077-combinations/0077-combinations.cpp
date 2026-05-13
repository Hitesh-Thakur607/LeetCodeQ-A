class Solution {
public:
vector<vector<int>>ans;
void allsq(vector<int>&temp,int idx,int k,int size){
    if(temp.size()==k){
        ans.push_back(temp);
        return ;
    }
    if(idx>size){
        return ;
    }
    for(int i=idx;i<=size;i++){
        temp.push_back(i);
        allsq(temp,i+1,k,size);
        temp.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        allsq(temp,1,k,n);
        return ans;
    }
};
