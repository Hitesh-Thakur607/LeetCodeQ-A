class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int maxi=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            mpp[curr]++;
            if(mpp[curr]>1){   
                while(start<i){
                    if(mpp[curr]==1){
                        break;
                    }
                    mpp[s[start]]--;
                    start++;
                }
            }
            maxi=max((i-start)+1,maxi);
        }
        return maxi;
    }
};