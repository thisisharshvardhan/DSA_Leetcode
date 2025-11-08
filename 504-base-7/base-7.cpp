class Solution {
public:
    string convertToBase7(int num) {
        int n=abs(num);
        if (num==0) return "0";
        string rev="";
        while (n!=0){
            string temp = to_string(n%7);
            rev = rev + temp;
            n=n/7;
        }
        reverse(rev.begin(),rev.end());
        if (num<0){
            rev ="-"+rev;
            return rev;
        }
        else return rev;
    }
};