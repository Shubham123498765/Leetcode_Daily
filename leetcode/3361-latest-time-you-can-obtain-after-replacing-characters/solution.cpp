class Solution {
public:
    string findLatestTime(string s) {
       // cout<<s[0]<<endl;
        if(s[0]=='?')
        {if(s[1]<='9' && s[1]>='2')
            s[0]='0';
            else
            s[0]='1';}
       // cout<<s[0]<<endl;
        if(s[1]=='?')
           if( s[0]=='1')
            s[1]='1';
           else
            s[1]='9';
        if(s[3]=='?')
            s[3]='5';
        if(s[4]=='?')
            s[4]='9';
        // cout<<s;
       return s;
    }
    
};
