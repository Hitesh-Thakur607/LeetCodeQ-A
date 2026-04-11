class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int,vector<int>>index;
        map<int,int>count;
        int mindist=INT_MAX;
        for(int i=0;i<nums.size();i++){
            index[nums[i]].push_back(i);
            count[nums[i]]++;
        }
        for(auto &it:count){
            if(it.second>=3){
                int i=0;
                while(i+3<=it.second){
                mindist=min(mindist,abs(index[it.first][i]-index[it.first][i+1])+abs(index[it.first][i+1]-index[it.first][i+2])+abs(index[it.first][i+2]-index[it.first][i]));
                i++;
            }
            }
        }
        return mindist==INT_MAX?-1:mindist;
    }
};