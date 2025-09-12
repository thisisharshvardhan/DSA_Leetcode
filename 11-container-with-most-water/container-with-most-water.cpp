class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int h1;
        int h2;
        int temp=0;
        int area=0;
        while(i<=j){
            h2=height[j];
            h1=height[i];
            if(h2>h1){
                temp=h1*(j-i);
                i++;
            }
            else {
                temp=h2*(j-i);
                j--;
            }
            if(temp>area){
                area=temp;
            }
            
        }
        return area;
    }
};