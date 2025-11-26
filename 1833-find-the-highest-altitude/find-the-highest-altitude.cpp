class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxi=INT_MIN;
        for (int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxi=max(sum,maxi);
        }
        if (maxi<0) return 0;
        else return maxi;
    }
};