class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int> freq(n,0);
        for (int i=0;i<n;i++){
            freq[nums[i]]+=1;
        }
        for (int i=0;i<n;i++){
            if (freq[i]>1) {
                ans=i;
                break;
            }
        }
        return ans;
    }
};