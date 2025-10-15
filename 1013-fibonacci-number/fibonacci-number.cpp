class Solution {
public:
    int fibo(int n){
        if (n==0 || n==1) return n;
        return (fib(n-1) + fib(n-2));
    }
    int fib(int n) {
        return fibo(n);
    }
};