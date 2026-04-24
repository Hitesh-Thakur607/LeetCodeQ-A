class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int rightcount=0;
        int leftcount=0;
        int rem=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                leftcount++;
            }
            else if(moves[i]=='R'){
                rightcount++;
            }
            else rem++;
        } 
        return leftcount>rightcount?(leftcount+rem)-rightcount:(rightcount+rem)-leftcount;
    }
};