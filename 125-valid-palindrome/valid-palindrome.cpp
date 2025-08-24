#include <string>
class Solution {
public:
    bool normalise(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')) {
            return true;
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        string newstr = "";
        for (int i = 0; i < s.length(); i++) {
            if (normalise(s[i])) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] - 'A' + 'a';
                    newstr.push_back(s[i]);
                } else {
                    newstr.push_back(s[i]);
                }
            }
        }
        int i = 0;
        int j = newstr.length() - 1;

        while (i <= j) {
            if (newstr[i] == newstr[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};