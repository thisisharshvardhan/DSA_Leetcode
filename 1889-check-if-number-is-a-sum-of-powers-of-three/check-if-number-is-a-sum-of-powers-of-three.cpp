class Solution {
public:
    bool checkPowersOfThree(int n) {
        int num = n;
        if (num<0) return false;
        while (num!=0){
            int dig = num%3;
            if (dig!=0 && dig!=1) return false;
            num=num/3;
        }
        return true;
    }
};