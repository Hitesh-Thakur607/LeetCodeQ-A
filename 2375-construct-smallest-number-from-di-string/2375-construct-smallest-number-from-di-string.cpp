class Solution {
public:
    string smallestNumber(string pattern) {
        string ans = "";
        int dcount = 0;
        int num = 1;

        for(int i = 0; i <= pattern.size(); i++){
            
            if(i < pattern.size() && pattern[i] == 'D'){
                dcount++;
            }
            else{
                for(int j = num + dcount; j >= num; j--){
                    ans += to_string(j);
                }
                num += dcount + 1;
                dcount = 0;
            }
        }

        return ans;
    }
};