class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       vector<int> ans;
       
       for(int i=0;i<n;i++){
        if (i+n/3 < n && nums[i]==nums[i + n/3] ) {
            if (ans.size()!=0 && nums[i]==ans[ans.size()-1]  ) continue;
            else {
            ans.push_back(nums[i]);
            i= i + n/3;
            }
        }
        
       }
       return ans;

       
    }
};