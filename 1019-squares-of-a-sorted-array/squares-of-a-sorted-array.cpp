class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1;
        for (int i=0;i<n;i++){
            vec1.push_back(nums[i]*nums[i]);
        }
        sort(vec1.begin(),vec1.end());
        return vec1;
        
    }
};