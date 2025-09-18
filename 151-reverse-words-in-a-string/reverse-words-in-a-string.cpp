class Solution {
public:
    string reverseWords(string s) {
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ")+1);
        
        string str="";
        string str1="";
        int n=s.size();
        int l=n;
        int i;
        for (i=n-1;i>=0;i--){
            if(s[i]==' '){
                str1=s.substr(i+1,(l-(i+1)));
                str1.erase(0, str1.find_first_not_of(" "));
                str1.erase(str1.find_last_not_of(" ")+1);
                if (str1.empty()) continue;
                else {
                    str=str+str1+" ";
                    l=i;
                }
            }
        }
        str+=s.substr(i+1,(l-(i+1)));
        str.erase(0, str.find_first_not_of(" "));
        str.erase(str.find_last_not_of(" ")+1);
        
        return str;

    }
};