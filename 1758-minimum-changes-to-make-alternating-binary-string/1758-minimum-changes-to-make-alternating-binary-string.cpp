class Solution {
public:
    int minOperations(string s) {
        int swapcount=0;
        int lastswapcount=0;
            string a="";
            for(int i=0;i<s.size();i++){
                if(i==0||i%2==0){
                    a+='0';
                }
                else a+='1';
            }
            string b="";
            for(int i=0;i<s.size();i++){
                if(i==0||i%2==0){
                    b+='1';
                }
                else b+='0';
            }
            for(int i=0;i<s.size();i++){
                if(s[i]!=a[i]){
                    swapcount++;
                }
            }   
            for(int i=0;i<s.size();i++){
                if(s[i]!=b[i]){
                    lastswapcount++;
                }
            }         
        return swapcount>lastswapcount?lastswapcount:swapcount;
}
};
