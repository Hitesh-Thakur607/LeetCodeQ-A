class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0;
        double maxi=INT_MIN;
        double sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i-start==k){
                sum-=nums[start];
                start++;
            }
            if(i-start==k-1){
                double avg=sum/k;
                maxi=max(maxi,avg);
            }
        }
        return maxi;
    }
};