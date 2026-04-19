class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxdist=0;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                //  cout<<i<<" "<<j<<endl;
                 maxdist=max(j-i,maxdist);
                 j++;
            }
           else if(nums1[i]==nums2[j]){
            j++;
           }
           else if(nums1[i]>nums2[j]){
            i++;
           }
           else {
            i++;
            j++;
           }
        }
        return maxdist;
    }
};
