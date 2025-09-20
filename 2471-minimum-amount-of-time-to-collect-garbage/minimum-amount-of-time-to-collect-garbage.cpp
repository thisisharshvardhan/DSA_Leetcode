class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size();
        int P,M,G;
        P=M=G=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if (garbage[i].find('P')!=string::npos) P=i;
            if (garbage[i].find('G')!=string::npos) G=i;
            if (garbage[i].find('M')!=string::npos) M=i;
        }
        for(int i=0;i<travel.size();i++){
            if (i<P) sum+=travel[i];
            if (i<G) sum+=travel[i];
            if (i<M) sum+=travel[i];
        }
        for(int i=0;i<n;i++){
            sum+=garbage[i].size();
        }
        return sum;

    }
};