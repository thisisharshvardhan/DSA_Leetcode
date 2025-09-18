class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> arr(1001,0);
        vector <int> ans;
        if(nums1.size()<nums2.size()){
            for(int i=0;i<nums1.size();i++){
                arr[nums1[i]]+=1;
            }
            for(int i=0;i<nums2.size();i++){
                if(arr[nums2[i]]!=0 ) {
                    ans.push_back(nums2[i]);
                    arr[nums2[i]]-=1;
                }
            }
        }
        else {
            for(int i=0;i<nums2.size();i++){
                arr[nums2[i]]+=1;
            }
            for(int i=0;i<nums1.size();i++){
                if(arr[nums1[i]]!=0 ) {
                    ans.push_back(nums1[i]);
                    arr[nums1[i]]-=1;
                }
            }
        }
        return ans;
    }
};