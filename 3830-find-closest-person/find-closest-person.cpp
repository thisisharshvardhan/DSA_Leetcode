class Solution {
public:
    int findClosest(int x, int y, int z) {
        int n1= abs(z-x);
        int n2= abs(z-y);
        if (n1>n2) return 2;
        if (n2>n1) return 1;
        return 0;
    }
};