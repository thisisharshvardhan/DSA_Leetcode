class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        int count=0;
        for (int i=0;i<n;i++){
            if (s[i]!=' ' && (i==0 || s[i-1]==' ')) {
                count+=1;
            }
        }
        return count;
        
    }
};