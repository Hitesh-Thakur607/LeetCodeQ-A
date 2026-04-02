class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int count=0;
        PriorityQueue<Integer>x=new PriorityQueue<>();
        PriorityQueue<Integer>y=new PriorityQueue<>();
        for(int i=0;i<g.length;i++){
            x.add(g[i]);
        }
        for(int i=0;i<s.length;i++){
            y.add(s[i]);
        }
        while(!x.isEmpty()&&!y.isEmpty()){
            if(x.peek()<=y.peek()){
                x.poll();
                y.poll();
                count++;
            }
            else{
                y.poll();
            }
        }
        return count;
    }
}