class Solution {
public:
    int bs(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if (mid+1 < n && nums[mid]>nums[mid+1]){
                ans=mid;
                break;
            }
            if (nums[mid]<nums[s]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;

    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=bs(nums);
        if (pivot==n-1){
            int s=0;
            int e=pivot;
            while (s<=e){
                int mid=s+(e-s)/2;
                if (nums[mid]==target){
                    return mid;
                }
                if (nums[mid]>target){
                    e=mid-1;
                }
                else {
                    s=mid+1;
                }
            }
        }
        else if (target>=nums[0]){
            int s=0;
            int e=pivot;
            while (s<=e){
                int mid=s+(e-s)/2;
                if (nums[mid]==target){
                    return mid;
                }
                if (nums[mid]>target){
                    e=mid-1;
                }
                else {
                    s=mid+1;
                }
            }
        }
        else {
            int s=pivot+1;
            int e=n-1;
            while (s<=e){
                int mid=s+(e-s)/2;
                if (nums[mid]==target){
                    return mid;
                }
                if (nums[mid]>target){
                    e=mid-1;
                }
                else {
                    s=mid+1;
                }
            }
        }
        return -1;
    }
};