class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mpp;
        int count=0;
        for(int i=0;i<word.size();i++){
            char a=word[i];
            if(a>=97){
                mpp[a]=i;
            }  
            else if(!mpp.contains(a)){
                mpp[a]=i;
            }
        }
        for(auto t:mpp){
            if(mpp.contains(t.first+32)){
                if(mpp[t.first]>mpp[t.first+32]){
                    count++;
                }
            }
        }
        return count;
    }
};