class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<pair<int,int>>xy;
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            xy.push_back({prices[i],i});
        }
        sort(xy.rbegin(),xy.rend());
        for(int i=0;i<prices.size();i++){
            if(xy[0].second>i){
                maxi=max(maxi,xy[0].first-prices[i]);
            }
            else{
                for(auto &it:xy){
                   if(it.second>i){
                    maxi=max(maxi,it.first-prices[i]);
                    break;
                   }
                }
            }
        }
        return maxi;
    }
};