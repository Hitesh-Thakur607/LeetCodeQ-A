class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<pair<int,int>>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            st.push_back({i,nums[i]});
        }    
        for(int i=0;i<st.size();i++){
            int val=INT_MIN;
            int indx=st[i].first;
            int valo=st[i].second;
            for(int j=indx+1;j<nums.size();j++){
                if(nums[j]>valo){
                    val=nums[j];
                    break;
                }
            }
            if(val==INT_MIN){
                for(int j=0;j<nums.size();j++){
                if(nums[j]>valo){
                    val=nums[j];
                    break;
                 }                    
                }
            }
            ans.push_back(val==INT_MIN?-1:val);
        }   
        return ans; 
    }
};
