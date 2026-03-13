class Solution {
void substr(ArrayList<String>ans,StringBuilder temp,int max){
    if(temp.length()==max){
        ans.add(temp.toString());
        return ;
    }
    if(temp.length()>max){
        return ;
    }
    temp.append('1');
    substr(ans,temp,max);
    temp.deleteCharAt(temp.length()-1);
    if(temp.length()==0){
        temp.append('0');
        substr(ans,temp,max);
        temp.deleteCharAt(temp.length()-1);
    }
    else if(temp.length()>0&&temp.charAt(temp.length()-1)!='0'){
        temp.append('0');
        substr(ans,temp,max);
        temp.deleteCharAt(temp.length()-1);
    } 

}
    public List<String> validStrings(int n) {
        ArrayList<String>ans=new ArrayList<>();
        StringBuilder temp=new StringBuilder("");
        substr(ans,temp,n);
        return ans;
    }
}