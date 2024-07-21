class Solution {
public:
    bool doesAliceWin(string s) {
        int vowels = 0;
        int last=0;
        for (int i=0;i<s.size();i++) {
          if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    ++vowels;
                    last=i;
                }
            }last++;

        if(vowels&1) return true;
        if(!(vowels&1) && vowels!=0) return true;
        
        return false;
        // if(!(vowels&1) && vowels!=0) return true;
        // else{

        //     if(last==s.size())
        //     return true;
        //     else return false;
        // }
        // return true;
    }
};
