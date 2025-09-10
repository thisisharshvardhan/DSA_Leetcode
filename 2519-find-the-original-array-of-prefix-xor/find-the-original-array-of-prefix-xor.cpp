#include <vector>
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        if (n==0) return {};
        vector<int> arr(n);
        arr[0]=pref[0];
        for(int i=1;i<n;i++){
            arr[i]=pref[i]^pref[i-1];
        }
        return arr;
    }
};