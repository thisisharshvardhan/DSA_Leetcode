#include <string>
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        string s1(n,' ');
        for (int i=0;i<n;i++){
            s1[indices[i]]=s[i];
        }
        return s1;
    }
};