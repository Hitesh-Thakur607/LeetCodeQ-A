class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int currentmax=0;
        for(int i=0;i<k;i++){
            currentmax+=cardPoints[i];
        }
        int n=cardPoints.size();
        int idx=n-1;
        int tempsum=currentmax;
        int firstidx=k-1;
        while(idx>=n-k&&firstidx>=0){
            tempsum-=cardPoints[firstidx];
            tempsum+=cardPoints[idx];
            currentmax=max(currentmax,tempsum);
            idx--;
            firstidx--;
        }
        return currentmax;
    }
};