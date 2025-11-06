class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++){
            if (s[0]=='#') {
                s.erase(0,1);
                i=i-1;}
            else if (s[i]=='#') {
                s.erase(i-1,2);
                i=i-2; }
        }
        for(int i=0;i<t.size();i++){
            if (t[0]=='#') {
                t.erase(0,1);
                i=i-1;}
            else if (t[i]=='#') {
                t.erase(i-1,2);
                i=i-2; }
        }
        if (s==t) return true;
        else return false;
    }
};