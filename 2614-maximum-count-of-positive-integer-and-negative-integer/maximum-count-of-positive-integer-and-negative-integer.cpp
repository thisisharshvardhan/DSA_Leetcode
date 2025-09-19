#include <algorithm>
class Solution {
public:
    int posi(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>0){
                ans=mid;
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return ans;
    }
    int negi(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<0){
                ans=mid;
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return ans;
    }
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int pos=posi(nums);
        int neg=negi(nums);
        if (pos==-1){
            return neg+1;
        }
        return max(neg+1,n-pos);
        

    }
};