class Solution {
public:
    string getSmallestString(string s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if ((s[i] - '0') % 2 == 0 && (s[i + 1] - '0') % 2 == 0 &&
                s[i + 1] < s[i]) {
                swap(s[i], s[i + 1]);
                break;
} else if ((s[i] - '0') % 2 == 1 && (s[i + 1] - '0') % 2 == 1 && s[i + 1] < s[i]) {
                swap(s[i], s[i + 1]);
                break;
            }
        }
    return s;
    }
};
