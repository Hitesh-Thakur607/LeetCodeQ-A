class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<100;i++){
            if(i>=10&&((i%10)*(i/10))%t==0){
                return i;
            }
            else if(i<10&&i%t==0){
                return i;
            }
        }
        return 100;
    }
};