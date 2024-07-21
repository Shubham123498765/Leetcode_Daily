class Solution {
public:
    long long func(int n){
        long long a=0;
        for(int i=0;i<n;i++){
            a+=i;
        }
        return a;
    }
    int maxOperations(string s) {
        int n=s.size();
       long long x= func(n); cout<<x;
        int ans=0,cnt=0,curr=0,prev=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                if(i==n-1){

                cnt++;
                }
                else if(s[i+1]!='0'){
                    cnt++;
                }
            }else{
                ans+=cnt;
            }
        }
       long long y= func(n);
        return ans;
    }
};
