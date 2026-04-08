class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int quidx=0;
        vector<long long>newnum;
        for(int i=0;i<nums.size();i++){
            newnum.push_back(nums[i]);
        }
        int curridx=queries[quidx][0];
        int finals=queries[quidx][1];
        int sum=0; 
        while(quidx<queries.size()){
            curridx=queries[quidx][0];
            int addition=queries[quidx][2];
            int secondone=queries[quidx][3];
            finals=queries[quidx][1];     
            while(curridx<=nums.size()&&curridx<=finals){
                newnum[curridx]=(newnum[curridx]*secondone)%(1000000000+7);
                curridx+=addition;
            }
            quidx++;
        }   
        for(int i=0;i<newnum.size();i++){
            sum^=newnum[i];
        }
        return sum;
    }
};