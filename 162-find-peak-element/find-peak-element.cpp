class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int ind;
        if (n>2){
            for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                ind=i;
            }
            else if (nums[0]>nums[1]) {
                ind = 0;
            }
            else if (nums[n-1]>nums[n-2]) {
                ind = n-1;
            }
        }
        }
        else {
            if(n==1){
                ind = 0;
            }
            else {
                if(nums[0]>nums[1]){
                    ind =0;
                }
                else {
                    ind=1;
                }
            }
        }
        
        return ind;
    }
};