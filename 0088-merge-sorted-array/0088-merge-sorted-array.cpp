class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int lastidx = m + n - 1;
        int last = m - 1;
        int secondlast = n - 1;

        while(last >= 0 && secondlast >= 0){

            if(nums1[last] > nums2[secondlast]){
                nums1[lastidx] = nums1[last];
                last--;
            }
            else{
                nums1[lastidx] = nums2[secondlast];
                secondlast--;
            }
            lastidx--;
        }

        while(secondlast >= 0){
            nums1[lastidx] = nums2[secondlast];
            secondlast--;
            lastidx--;
        }
    }
};