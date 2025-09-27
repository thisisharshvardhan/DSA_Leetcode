class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i,j;
        char ans;
        int count=0;
        for (i=n-1;i>=0;i--){
            if (s[i]!=' '){
                ans = i;
                break;
            }
        }
        for (j=i;j>=0;j--){
            if(s[j]==' '){
                break;
            }
            else {
                count+=1;
            }
        }
        return count;
    }
};