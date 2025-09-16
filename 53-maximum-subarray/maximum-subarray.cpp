class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int max1=nums[0];
        for (int i=1;i<n;i++){
            curr=max(nums[i],curr+nums[i]);
            max1=max(max1,curr);
        }
        return max1;
    }
};