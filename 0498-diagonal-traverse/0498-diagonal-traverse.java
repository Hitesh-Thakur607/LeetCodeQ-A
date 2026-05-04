class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        ArrayList<ArrayList<Integer>>ans=new ArrayList<>();
        HashMap<Integer,ArrayList<Integer>>mpp=new LinkedHashMap();
        int count=0;
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                count++;
                if(!mpp.containsKey(i+j)){
                    System.out.println(i+j);
                    mpp.put(i+j,new ArrayList<>());
                    mpp.get(i+j).add(mat[i][j]);   
                }
                else mpp.get(i+j).add(mat[i][j]);
            }
        }
        Boolean rev=false;
        int[] arr=new int[count];
        for(Map.Entry<Integer,ArrayList<Integer>>mp:mpp.entrySet()){
            if(rev){
                ans.add(mp.getValue());
                rev=false;
            }
            else{
                System.out.println(mp.getValue());
                Collections.reverse(mp.getValue());
                ans.add(mp.getValue());
                rev=true;
            }
        }
        int idx=0;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.get(i).size();j++){
                arr[idx]=ans.get(i).get(j);
                idx++;
            }
        }
        return arr;
    }
}