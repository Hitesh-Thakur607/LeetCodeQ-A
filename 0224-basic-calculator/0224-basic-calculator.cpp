class Solution {
public:
int idx=0;
    int calculate(string &s) {
       int res=0;
        int sign=1;
        long long num=0;
        while(idx<s.size()){
            char val=s[idx++];
            if(val==' '){
                continue;
            }
            if(val>='0'&&val<='9'){
                num=num*10+(val-'0');
            }
            else if(val=='('){
                num+=calculate(s);
            }
            else if(val==')'){
                return res+sign*num;
            }
            else if(val=='+'||val=='-'){
                res+=num*sign;
                num=0;
                sign=val=='-'?-1:1;
            }
        }
         return res+(num*sign);
    }
};