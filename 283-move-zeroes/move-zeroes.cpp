#include <algorithm>
class Solution {
public:
    int find(vector<int>& nums,int n){
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                return i;
            }
        }
        return -1;
    }

    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (find(nums,n)!= -1){
                nums.erase(nums.begin() + find(nums,n));
                nums.push_back(0);
            }
        }
        
        
    }
};