class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n=words.size();
        string w;
        for (int i=0;i<n;i++){
            w = w + words[i][0];
        }
        if (w==s) return true;
        else return false;
    }
};