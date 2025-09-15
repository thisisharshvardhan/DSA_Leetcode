#include <algorithm>
class Solution {
public:
    int maxi(vector<int>& heights, int n, int i){
        int maxim=heights[i];
        int ind=i;
        for(int j=i;j<n;j++){
            if (heights[j]>maxim){
                maxim=heights[j];
                ind=j;
            }
        }
        return ind;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        for (int i=0;i<n;i++){
            int ind=maxi(heights,n,i);
            swap(names[i],names[ind]);
            swap(heights[i],heights[ind]);
        }
        return names;
    }
};