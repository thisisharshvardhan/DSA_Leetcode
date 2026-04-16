class Solution {
public:
/*      int solveRec(vector<int> arr,int curr,int prev){
        if (curr>=arr.size()) return 0;

        int inc=0;
        if (prev==-1 || arr[curr]>arr[prev]){
            inc = 1 + solveRec(arr, curr+1,curr);
        }
        int exc = 0 + solveRec(arr,curr+1,prev);
        int ans=max(inc,exc);
        return ans;
    } */

/* 
        int solveMem(vector<int> &nums,int curr,int prev, vector<vector<int>>& dp){
        if (curr>=nums.size()) return 0;
        if (dp[curr][prev+1]!=-1) return dp[curr][prev+1];

        int inc=0;
        if (prev==-1 || nums[curr]>nums[prev]){
            inc = 1 + solveMem(nums, curr+1,curr,dp);
        }
        int exc = 0 + solveMem(nums,curr+1,prev,dp);
        int ans=max(inc,exc);
        dp[curr][prev+1]=ans;
        return ans;
    } */

    int solveTab(vector<int> &nums){
        int prev=-1;
        int curr=0;
        int n=nums.size();
        vector<vector<int>> dp (n+1,vector<int>(n+1,0));
        for (int curr=n-1;curr>=0;curr--){
            for (int prev=curr-1;prev>=-1;prev--){
                    int inc=0;
                    if (prev==-1 || nums[curr]>nums[prev]){
                        inc = 1 + dp[curr+1][curr+1];
                    }
                    int exc = 0 + dp[curr+1][prev+1];
                    dp[curr][prev+1]=max(inc,exc);
                    
            }
        }
        return dp[0][0];
    }


    int lengthOfLIS(vector<int>& nums) {
        
        int ans=solveTab(nums);
        return ans;

    }
};