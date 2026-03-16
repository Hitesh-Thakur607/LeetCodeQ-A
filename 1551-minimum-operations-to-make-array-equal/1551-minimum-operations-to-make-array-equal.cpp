class Solution {
public:
    int minOperations(int n) {
        int count=0;
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back((2*i)+1);
        }
        for(int i=0;i<n/2;i++){
            int start=i;
            int end=(n-1)-i;
            while(arr[start]!=arr[end]){
                arr[start]=arr[start]+1;
                arr[end]=arr[end]-1;
                count++;
            }
        }
        return count;      
    }
};

 