class Solution {
public:
    vector<int> closestDivisors(int num) {
        return minpair(num+1,num+2);
    }
    vector <int> minpair(int a,int b){
        for (int i=sqrt(b);i>=1;i--){
            if (b%i==0 && a%i==0){
                return (abs(i-a/i)>abs(i-b/i)?vector <int> {i,b/i} : vector <int> {i,a/i});
            }
            if (b%i==0) return {i,b/i};
            if (a%i==0) return {i,a/i};
        }
        return {};
    }
};