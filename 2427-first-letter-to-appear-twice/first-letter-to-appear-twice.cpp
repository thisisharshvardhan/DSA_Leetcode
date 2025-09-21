class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        vector <int> arr(250,0);
        int ans;
        for (int i=0;i<n;i++){
            arr[s[i]]+=1;
            if (arr[s[i]]==2){
                ans=s[i];
                break;
            }
        }
        return ans;
    }
};