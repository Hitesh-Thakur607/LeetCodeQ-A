class Solution {
    public int[] findThePrefixCommonArray(int[] a, int[] b) {
        int[] arr=new int[a.length];
        HashMap<Integer,Integer>x=new HashMap<>();
        HashMap<Integer,Integer>y=new HashMap<>();
        int count=0;
        for(int i=0;i<a.length;i++){
            x.put(a[i],x.getOrDefault(a[i],0)+1);
            y.put(b[i],y.getOrDefault(b[i],0)+1);
            if(a[i]==b[i]){
                count++;
            }
            else{
            if(y.containsKey(a[i])&&y.get(a[i])==x.get(a[i])){
                count++;
            }
            if(x.containsKey(b[i])&&x.get(b[i])==y.get(b[i])){
                count++;
            }
            }
            arr[i]=count;
        }
        return arr;
    }
}
