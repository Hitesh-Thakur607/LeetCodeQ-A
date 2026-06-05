class Solution {
public:
    int calculate(string s) {
        stack<int>ans;
        char sign='+';
        int num=0;
        int result=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            if(!isdigit(s[i])&&s[i]!=' '&&i>0||i == s.size() - 1){
                if(sign=='+'){
                    ans.push(num);
                }
                if(sign=='-'){
                    ans.push(-num);
                }
                if(sign=='*'){
                    int val=ans.top();
                    ans.pop();
                    ans.push(num*val);
                }
                if(sign=='/'){
                    int val=ans.top();
                    ans.pop();
                    ans.push(val/num);
                }
                sign=s[i];
                num=0;
            }
        }
        // ans.push(num);
        while(!ans.empty()){
            result+=ans.top();
            ans.pop();
        }
        return result;
    }
};

