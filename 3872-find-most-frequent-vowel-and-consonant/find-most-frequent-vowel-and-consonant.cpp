#include <bits/stdc++.h>
class Solution {
public:
    int maxFreqSum(string s) {
        
        int a,e,i,o,u;
        vector<int> con(1000,0);
        a=e=i=o=u=0;
        for (int k=0;k<s.length();k++){
            
            if (s[k]=='a'){
                a+=1;
            }
            else if (s[k]=='e'){
                e+=1;
            }
            else if (s[k]=='i'){
                i+=1;
            }
            else if (s[k]=='o'){
                o+=1;
            }
            else if (s[k]=='u'){
                u+=1;
            }
            else{
                con[s[k]]+=1;
            }
            
        }
        int vow=max({a,e,i,o,u});
        int cons=*max_element(con.begin(), con.end());
        return vow+cons;
    }
};