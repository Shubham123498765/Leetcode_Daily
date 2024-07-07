class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        string result = "";
    
    for (int i = 0; i < n; ++i) {
        int newIndex = (i + k) % n;
        result += s[newIndex];
    }
    return result;
    }
};
