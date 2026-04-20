class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int start=0;
        int maxdist=0;
        while(start<colors.size()&&start-colors.size()-1>maxdist){
            int nextele=-1;
            int right=start;
            while(right<colors.size()){
                if(colors[start]!=colors[right]){
                    if(nextele==-1){
                        nextele=right;
                    }
                    maxdist=max(right-start,maxdist);
                }
                right++;
            }
            if(nextele==-1){
                break;
            }
            start=nextele;
        }
        return maxdist;
    }
};
