class Solution {
public:
    int dayOfYear(string date) {
        int n=date.size();
        int year= stoi(date.substr(0,4));
        int month= stoi(date.substr(5,2));
        int day= stoi(date.substr(n-2,2));
        vector <int> months={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int result=0;
        bool leap=(year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
        if (leap) months[2]=29;
        for (int i=0;i<month;i++){
            result=result+months[i];
        }
        result+=day;
        return result;
    }
};