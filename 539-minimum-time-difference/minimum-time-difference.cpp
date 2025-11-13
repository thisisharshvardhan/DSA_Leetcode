class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans;
        for (int i=0;i<timePoints.size();i++){
            int h= stoi(timePoints[i].substr(0,2));
            int m= stoi(timePoints[i].substr(3,2));
            ans.push_back(h*60+m);
        }
        sort(ans.begin(),ans.end());
        int ans1=INT_MAX;
        for (int i=1;i<ans.size();i++){
            int mini=ans[i]-ans[i-1];
            ans1=min(mini,ans1);
        }
        ans1 = min(ans1, 1440 - ans.back() + ans[0]);
        return ans1;
    }
};