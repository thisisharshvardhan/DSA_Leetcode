class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=2;
        int c=0;
        for (int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        if (n<=2) return n;
        return c;
    }
};