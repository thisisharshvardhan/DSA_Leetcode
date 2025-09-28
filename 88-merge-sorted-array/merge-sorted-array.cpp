#include <bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int a=0;
        while (i>=0 && j>=0){
            
            if (nums1[i] > nums2[j]){
                nums1[m+n-1-a]=nums1[i];
                i--;
            }
            else {
                nums1[m+n-1-a]=nums2[j];
                j--;
            }
            a+=1;

        }
        if (j>=0){
            int a=0;
            int b=0;
            for (int k=m+n-j-1;k<m+n;k++){
                
                nums1[a]=nums2[b];
                a+=1;
                b++;
            }
        }
    }
    
};