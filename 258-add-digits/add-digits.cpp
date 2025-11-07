class Solution {
public:
    int addDigits(int num) {
        int count =0;
        
        while (num > 9){
            int sum = 0;
            while (num!=0){
                int dig=num%10;
                sum+=dig;
                num=num/10;
            }
            num = sum;
            count +=1;
        }
        return num;
    }
};