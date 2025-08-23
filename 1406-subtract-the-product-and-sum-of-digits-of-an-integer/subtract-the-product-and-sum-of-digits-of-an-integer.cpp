class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,rem=0,product=1,result;
        while (n!=0)
        {
            rem=n%10;
            product=product*rem;
            sum=sum+rem;
            n=n/10;
        }
        result = product - sum;
        return result;
    }
};