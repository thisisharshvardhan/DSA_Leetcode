#include <algorithm>
class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i-1]>='a' && s[i-1]<='z' && s[i]>='0' && s[i]<='9'){
                s.erase(i-1,2);
                i=max(i-2,0);
            }
        }
        return s;
    }
};