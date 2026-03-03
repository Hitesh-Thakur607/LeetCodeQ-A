class Solution {
public:
    char binary(string ans,int n,int i,int k){
        if(i==n){
            return ans[k-1];
        }
        string tempo="";
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0'){
                tempo+='1';
            }
            else tempo+='0';
        }
        reverse(tempo.begin(),tempo.end());
        string temp=ans+"1"+tempo;
        return binary(temp,n,i+1,k);
    }
    char findKthBit(int n, int k) {
        return binary("0",n,1,k);
    }
};
