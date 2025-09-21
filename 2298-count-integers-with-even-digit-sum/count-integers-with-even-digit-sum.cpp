class Solution {
public:
    int countEven(int num) {
        int count =0;
        int sum;
        int dig;
        for (int i=1;i<=num;i++){
            sum=0;
            int x=i;
            while (x!=0){
                dig=x%10;
                sum+=dig;
                x=x/10;
            }
            if (sum%2==0) count+=1;
        }
        return count;
    }
};