class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int first=INT_MAX;
        int n=2;
        for(int i=startIndex;i>=0;i--){
            if(i!=startIndex&&words[i]==target){
                int val1=abs(startIndex-i);
                int val2=words.size()-startIndex+i;
                cout<<val2<<endl;
                first=min(first,val1);
                first=min(first,val2);
            }
            else if(words[i]==target&&i==startIndex){
                return 0;
            }
        }
        for(int i=startIndex;i<words.size();i++){
            if(i!=startIndex&&words[i]==target){
                int val1=abs(startIndex-i);
                int val2=startIndex+words.size()-i;
                cout<<val2<<endl;
                first=min(first,val1);
                first=min(first,val2);
            }
        }
        return first==INT_MAX?-1:first;
    }
};
