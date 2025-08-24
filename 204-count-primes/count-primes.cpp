class Solution {
public:
    int countPrimes(int n) {
        vector <bool> prime(n+2,true);

        prime[0]=prime[1]=false;

        int count=0;
        
        for (int i=0;i<n;i++){
            if (prime[i]==1){
                count +=1;
                int j=2*i;
                while (j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return count;
        
    }
};