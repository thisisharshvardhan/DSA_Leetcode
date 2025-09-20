class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if (n<3) return false;
        for (int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) return false;
        }
        int s=0;
        int e=n-1;
        int pivot;
        while(s<=e){
            int mid=(s+e)/2;
            if (arr[mid]>arr[mid+1]){
                pivot=mid;
                e=mid-1;
            }
            if(arr[mid]<arr[mid+1]) s=mid+1;
            
        }
        for (int i=0;i<pivot;i++){
            if (arr[i]>arr[i+1]) return false;
        }
        for(int i=pivot;i<n-1;i++){
            if (arr[i]<arr[i+1]) return false;
        }
        if (pivot==n-1 || pivot==0) return false;
        return true;
    }
};