class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocount=k;
        int start=0;
        int maxsize=0;
        int curr=0;
        while(curr<nums.size()){
            if(nums[curr]==0&&zerocount==0){
                while(true){
                    if(nums[start]==0){
                         start++;
                        zerocount++;
                        break;
                     }
                start++;
                }
                zerocount--; 
            }
            else if(nums[curr]==0){
                zerocount--;
            }
            maxsize=max(maxsize,(curr-start)+1);
            curr++;
        }
        return maxsize;
    }
};