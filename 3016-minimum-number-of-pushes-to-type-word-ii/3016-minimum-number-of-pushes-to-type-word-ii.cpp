class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mpp;
        vector<pair<int,int>>p;
        for(int i=0;i<word.size();i++){
            mpp[word[i]]++;
        }
        for(auto &it:mpp){
            p.push_back({it.second,it.first});
        }
        sort(p.rbegin(),p.rend());
        int count=0;
        int total=0;
        for(auto &it:p){
            total++;
            if(total%8==0){
                count+=(total/8)*it.first;
            }
            else{
                count+=((total/8)+1)*it.first;
            }
        }
        return count;
    }
};
// 1 2 3 4 5 6 7 8
// 2 2 2 2 2 2