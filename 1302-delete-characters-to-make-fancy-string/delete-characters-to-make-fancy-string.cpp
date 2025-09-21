class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        string s1;
        for (int i=0;i<n;i++){
            int ss=s1.size();
            if(ss>=2 && s1[ss-1]==s[i] && s1[ss-2]==s[i]){
                continue;
            }
            else {
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};