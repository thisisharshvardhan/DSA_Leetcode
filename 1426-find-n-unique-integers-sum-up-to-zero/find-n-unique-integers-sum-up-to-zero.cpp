class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans;
        if (n%2!=0) {
            ans.push_back(0);
            for(int i=0;i<n/2;i++){
                ans.push_back(i+1);
                int temp = -1 * (i+1);
                ans.push_back(temp);
            }
        }
        else {
            for(int i=1;i<=n/2;i++){
                ans.push_back(i+1);
                int temp = -1 * (i+1);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};