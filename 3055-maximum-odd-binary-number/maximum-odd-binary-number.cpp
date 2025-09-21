class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        string ans;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') c+=1;
        }
        for(int i=0;i<n;i++){
            if(i<c-1){
                ans.push_back('1');
            }
            else if(i<n-1) {
                ans.push_back('0');
            }
            else {
                ans.push_back('1');
            }
        }
        return ans;
    }
};