class Solution {
public:
    string finalString(string s) {
        string fault;
        for (int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(fault.begin(),fault.end());
            }
            else {
                fault+=s[i];
            }
        }
        return fault;
    }
};