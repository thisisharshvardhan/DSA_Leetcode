class Solution {
public:
    int checksum(vector<int>& nums, int start, int end) {
        int sum1 = 0;
        for (int i = start; i <end; i++) {
            sum1 = sum1 + nums[i];
        }
        return sum1;
    }

    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum=checksum(nums,0,n);
        int lsum = 0;
        int rsum = 0;
        int pivot = -1;
        for (int i=0;i<n;i++){
            
            

            rsum = totalsum-lsum-nums[i];
            if (lsum==rsum){
                pivot = i;
                break;
            }
            
            lsum = lsum + nums[i];
        }
        return pivot;
    }
};