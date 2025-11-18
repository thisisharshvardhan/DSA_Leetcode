class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for (int i=0;i<nums.size();i++){
            if (i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        for (int i=0;i<nums.size();i++){
            if (i%2==0) nums[i]=even[i/2];
            else nums[i]=odd[i/2];
        }
        return nums;
    }
};