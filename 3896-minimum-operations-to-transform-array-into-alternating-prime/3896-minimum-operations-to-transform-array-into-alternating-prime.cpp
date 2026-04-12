class Solution {
public:
    int minOperations(vector<int>& nums) {
        int totalcount=0;
        if(nums.empty()) return 0;
        int maxVal=110000;
vector<bool> check(maxVal, true);
        check[0] = check[1] = false;
for(int i = 2; i * i < maxVal; i++){
    if(check[i]){
        for(int j = i * i; j < maxVal; j += i){
            check[j] = false;
        }
    }
}
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                if(!check[nums[i]]){
                    int steptwo=0;
                    for(int k=nums[i];k<check.size();k++){
                        if(check[k]){
                            break;
                        }
                        else steptwo++;
                    }
                    totalcount+=steptwo;
                }
            }
            else if(check[nums[i]]){
                    int steptwo=0;
                    for(int k=nums[i];k<check.size();k++){
                        if(!check[k]){
                            break;
                        }
                        else steptwo++;
                    }
                 totalcount+=steptwo;
            }
        }
        return totalcount;
    }
};