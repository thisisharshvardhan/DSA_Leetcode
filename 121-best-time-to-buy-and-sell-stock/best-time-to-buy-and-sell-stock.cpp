#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX, maxp = 0;
        for (int price : prices) {
            minp = min(minp, price);
            maxp = max(maxp, price - minp);
        }
        return maxp;
    }
};