class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int temp=0;
        int sum=0;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                temp+=accounts[i][j];
            }
            if(temp>sum){
                sum=temp;
            }
            temp=0;
        }
        return sum;
    }
};