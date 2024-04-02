class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
     if (str1.length()!=str2.length()) return false;
        map <char,char> m,m1;
        for(int i =0; i<str1.length();i++){
            char c1=str1[i];
            char c2=str2[i];
            if((m.find(c1)!=m.end()) or (m1.find(c2)!=m1.end()))
               {if(((m[c1]!=c2) or ((m1[c2]!=c1))) )
                return false;}
            else 
                { m[c1]=c2; 
                  m1[c2]=c1; }
        }
        return true;
 
    }
};
