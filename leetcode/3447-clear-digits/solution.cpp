class Solution {
public:
    string clearDigits(string s) {
        string result;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {

                int j = i - 1;
                while (j >= 0 && isdigit(s[j])) {
                    j--;
                }

                if (j >= 0) {

                    result.append(s.substr(0, j));
                    result.append(s.substr(i + 1));
                    s = result;
                    result.clear();
                    i = 0;
                } else {

                    result.append(s.substr(i + 1));
                    s = result;
                    result.clear();
                    i = 0;
                }
            }
        }
        return s;
    }
};
