class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(),m=t.size();
        int i=n-1,j=m-1,cnt1=0,cnt2=0;
        while(true){
            if(i>=0 && s[i]=='#')
            {cnt1++;
            i--;}
            else if(j>=0 && t[j]=='#'){
                cnt2++;
                j--;
            }
            else if(cnt1 && i>=0){
                cnt1--;
                i--;
            }
            else if(cnt2 && j>=0){
                cnt2--;
                j--;
            }
            else if(i>=0 && j>=0 && s[i]==t[j]){
                i--;
                j--;
            }
            else break;
        }
        if(i==-1 && j==-1)
        return true;
       return 0;
}
};