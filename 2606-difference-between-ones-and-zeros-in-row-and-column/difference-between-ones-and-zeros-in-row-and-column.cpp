class Solution {
public:
    
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector <int> rowone(m,0),colone(n,0);
        vector<vector<int>> diff(m, vector<int>(n, 0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    rowone[i]++;
                    colone[j]++;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diff[i][j]= rowone[i]+colone[j] - (m-rowone[i]) -(n-colone[j]);
            }
        }
        return diff;
    }
};