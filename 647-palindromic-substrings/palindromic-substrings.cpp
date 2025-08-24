class Solution {
public:
    int checkpalindrome(string s, int i, int j){
        int count =0;
        while (i>=0 && j<s.length() && s[i]==s[j]){
            count +=1;
            i--;
            j++;
        }
        return count;

    }


    int countSubstrings(string s) {
        int TotalCount=0;
        for (int cen=0;cen<s.length();cen++){
            //for odd palindrome substring
            int i=cen;
            int j=cen;
            int OddLenCount = checkpalindrome (s,i,j);
            //for even palindrome substring
            i=cen;
            j=cen + 1;
            int EvenLenCount = checkpalindrome (s,i,j);

            TotalCount = TotalCount + OddLenCount + EvenLenCount;

        }
        return TotalCount;
    }
};