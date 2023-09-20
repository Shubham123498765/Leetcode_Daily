class Solution {
public:
    bool rotateString(string a, string b) {
        if(a.size()!=b.size())
        return 0;
        int n=a.size();
        a=a+a;
        int i=0,j=0;
        while(i<2*n &&j<n){
            if(b[j]==a[i])
            j++;
            else if(b[0]==a[i])
            j=1;
            else j=0;
            i++;
        }
        return (j==n);

    }
};