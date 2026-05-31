class Solution {
public:
    int calculate(string sa) {

        string s = "";

        for(int j = 0; j < sa.size(); j++){
            if(sa[j] != ' '){
                s += sa[j];
            }
        }

        stack<long long> val;
        stack<char> opp;

        int i = 0;

        while(i < s.size()){

            // build complete number
            long long count = 0;

            while(i < s.size() && isdigit(s[i])){
                count = count * 10 + (s[i] - '0');
                i++;
            }

            // if number found
            if(count || (i > 0 && s[i-1] == '0')){

                // handle * and /
                if(!opp.empty() && (opp.top() == '*' || opp.top() == '/')){

                    char op = opp.top();
                    opp.pop();

                    long long top = val.top();
                    val.pop();

                    if(op == '*'){
                        val.push(top * count);
                    }
                    else{
                        val.push(top / count);
                    }
                }
                else{
                    val.push(count);
                }
            }

            if(i < s.size()){
                opp.push(s[i]);
            }

            i++;
        }

        // now solve + and -
        stack<long long> temp;

        while(!val.empty()){
            temp.push(val.top());
            val.pop();
        }

        stack<char> tempOp;

        while(!opp.empty()){
            tempOp.push(opp.top());
            opp.pop();
        }

        long long ans = temp.top();
        temp.pop();

        while(!tempOp.empty()){

            char op = tempOp.top();
            tempOp.pop();

            long long num = temp.top();
            temp.pop();

            if(op == '+'){
                ans += num;
            }
            else if(op == '-'){
                ans -= num;
            }
        }

        return ans;
    }
};