class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        string s1,s2;
        int m=word2.size();
        for(int i=0;i<n;i++){
            s1+=word1[i];
        }
        for(int j=0;j<m;j++){
            s2+=word2[j];
        }
        if (s1==s2){
            return true;
        }
        else {
            return false;
        }
    }
};