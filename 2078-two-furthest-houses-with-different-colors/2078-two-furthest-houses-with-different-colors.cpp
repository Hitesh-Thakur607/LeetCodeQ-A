class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int start=0;
        int maxdist=0;
        while(start<colors.size()){
            if(colors.size()-start<=maxdist){
                break;
            }
            int latst=colors.size()-1;
            while(latst>start){
                if(colors[start]!=colors[latst]){
                    break;
                }
                latst--;
            }
            maxdist=max(latst-start,maxdist);
            start++;
        }
        return maxdist;
    }
};
// 1 6 2 1 1 1