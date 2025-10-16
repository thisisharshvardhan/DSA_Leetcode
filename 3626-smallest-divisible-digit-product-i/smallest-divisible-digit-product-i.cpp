class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i=n;i<n+10;i++){
            int num=i;
            int prod=1;
            while (num!=0){
                int dig=num%10;
                prod=prod*dig;
                num=num/10;
            }
            if (prod%t==0) return i;
        }
        return n;
    }
};