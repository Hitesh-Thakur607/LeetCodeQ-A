class Solution {
    String anso="";
    boolean findone(StringBuilder ans, HashSet<String>checko,int n){
        if(ans.length()==n&&!checko.contains(ans.toString())){
            anso=ans.toString();
            return true;
        }
        else if(ans.length()==n){
            return false;
        }
        ans.append('0');
        if(findone(ans,checko,n)){
            return true;
        }
        ans.deleteCharAt(ans.length()-1);
        ans.append('1');
        if(findone(ans,checko,n)){
            return true;
        }
        ans.deleteCharAt(ans.length()-1);
        return false;
    }
    public String findDifferentBinaryString(String[] nums) {
        HashSet<String>checko=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            checko.add(nums[i]);
        }
        StringBuilder ans=new StringBuilder("");
        findone(ans,checko,nums[0].length());
        return anso;
    }
}