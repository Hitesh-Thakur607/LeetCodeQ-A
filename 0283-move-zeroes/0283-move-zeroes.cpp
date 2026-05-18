class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerocount=0;
        int startzero=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
                if(zerocount==0){
                    startzero=i;
                }
                zerocount++;
            }
            else if(zerocount>0) {
                int val=nums[i];
                nums[startzero]=val;
                nums[i]=0;
                startzero++;
            }
            i++;
        }
    }
};
// 0 1 0 3 12
// 1 0 0 3 12
// startzero=1;
// zerocount=1;
// 1 0 0 3 12
// zerocount=2;
// 1 3 0 0 12
// startzero=2
// zerocount=0;
// 1 3 12 0 0