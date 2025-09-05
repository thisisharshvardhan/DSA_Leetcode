class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int max=0;
        int count=1;
        int x=nums[0];
        for (int i=1;i<n;i++){
            
            if (nums[i-1]!=nums[i]){
                count=1;
                }
            count +=1;
            if (count > max){
                max=count;
                x=nums[i];
            }
        }
        return x;
        
    }
};