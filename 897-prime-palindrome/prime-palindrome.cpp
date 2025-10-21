class Solution {
public:
    bool isprime(int n){
        if (n<2) return false;
        for (int i=2;i*i<=n;i++){
            if (n%i==0) return false;
        }
        return true;
    }
    bool ispalindrome(int n){
        int k=n;
        int rev=0;
        while(k!=0){
            rev=rev*10 + k%10; 
            k=k/10;
        }
        if (n==rev) return true;
        return false;
    }

    int primePalindrome(int n) {
        while(true){
            if (isprime(n) && ispalindrome(n)){
                return n;
            }

            n=n+1;

            if (n > 11 && to_string(n).size() % 2 == 0)
                n = pow(10, to_string(n).size()) + 1;
        }
    }
};