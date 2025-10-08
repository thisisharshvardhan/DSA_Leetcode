class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int num=n*n;
        if (maxWeight/w >= num) return num;
        else {
            return maxWeight/w;
        }
    }
};