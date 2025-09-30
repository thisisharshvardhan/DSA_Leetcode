class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int caps=0;
        int small=0;
        if (word[0]>='A' && word[0]<='Z'){
            caps=1;
            for (int i=1;i<n;i++){
                if (word[i]>='A' && word[i]<='Z'){
                    caps+=1;
                }
                else {
                    small+=1;
                }
            }
            if (small>1 && small<n-1) return false;
            if (small == n-1) return true;
            if (caps >1 && caps<n) return false;
            if (caps==n) return true;
        }
        else {
            for (int i=0;i<n;i++){
                if (word[i]>='A' && word[i]<='Z'){
                    caps+=1;
                }
                else {
                    small+=1;
                }
            }
            if (small>1 && small<n) return false;
            if (small == n) return true;
            if (caps >=1) return false;
            
        }
        return false;
    }
};