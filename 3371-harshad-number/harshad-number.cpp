class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int num=x;
        while (x!=0){
            int dig=x%10;
            sum+=dig;
            x=x/10;
        }
        if (num%sum==0){
            return sum;
        }
        else {
            return -1;
        }

    }
};