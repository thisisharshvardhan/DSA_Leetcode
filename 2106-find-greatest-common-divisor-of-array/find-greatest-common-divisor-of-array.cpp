class Solution {
public:
    int gcdi(int n,int m){
        if (m==0) return n;
        return gcd(m,n%m);
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini,maxi;
        sort(nums.begin(),nums.end());
        mini=nums[0];
        maxi=nums[n-1];
        int ans=gcdi(maxi,mini);
        return ans;
    }
};