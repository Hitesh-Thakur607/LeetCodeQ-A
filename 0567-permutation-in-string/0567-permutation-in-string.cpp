class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);
        int start=0;
        for(int i=0;i<s1.size();i++){
            arr1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            int a=s2[i]-'a';
            arr2[a]++;
            while(start<=i&&arr2[a]>arr1[a]){
                arr2[s2[start]-'a']--;
                start++;
            }
            if(arr1==arr2){
                return true;
            }
        }
        return false;
    }
};