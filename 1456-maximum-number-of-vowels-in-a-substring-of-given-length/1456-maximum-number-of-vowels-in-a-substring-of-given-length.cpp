class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>a;
        a.insert('a');
         a.insert('e');
          a.insert('i');
           a.insert('o');
            a.insert('u');
        int start=0;
        int maxcount=0;
        int tempcount=0;
        for(int i=0;i<s.size();i++){
            if(a.find(s[i])!=a.end()){
                tempcount++;
            }
            if(i-start+1>k){
                // cout<<tempcount<<" "<<start<<" "<<i<<endl;
                if(a.find(s[start])!=a.end()){
                    tempcount--;
                }
                start++;
            }
            maxcount=max(maxcount,tempcount);
        }
        return maxcount;
    }
};