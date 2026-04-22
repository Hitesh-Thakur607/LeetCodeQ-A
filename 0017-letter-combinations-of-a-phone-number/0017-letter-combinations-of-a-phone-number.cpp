class Solution {
public:
vector<string>phone={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string>ans;
void allsequence(string& digits,int idx,string test){
    if(test.size()==digits.size()){
        ans.push_back(test);
        return;
    }
    if(idx>=digits.size()){
        return ;
    }
    int idxx=digits[idx]-'0';
    cout<<idxx<<endl;
    if(idxx>9){
        return ;
    }
    for(int i=0;i<phone[idxx].size();i++){
        allsequence(digits,idx+1,test+phone[idxx][i]);
    }
}
    vector<string> letterCombinations(string digits) {
        allsequence(digits,0,"");
        return ans;
    }
};