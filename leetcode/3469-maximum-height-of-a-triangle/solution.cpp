class Solution {
public:
    int solve(int r,int b)
    {
        //   cout<<r<<" "<<b<<endl;
        int i=0,j=1,ct=0;
        --b;
        ct++;
        int flag=0;
        if(r<i+2) return ct;
        while(b>=j+2 || r>=i+2){
            if(flag){
                b=b-(j+2);
                ct++;
                j=j+2;
                flag=0;
                if(r<i+2)
                    break;
            }
            else{
                r=r-(i+2);
                ct++;
                i=i+2;
                flag=1;
                if(b<j+2)
                    break;
            }
        }
        return ct;
    }
    int maxHeightOfTriangle(int r, int b) {
        // cout<<r<<" "<<b<<endl;
       
            // cout<<"used"<<endl;
       int ans1= solve(b,r);
    //    cout<<ans1<<endl;
            // cout<<"used"<<endl;
        int ans2 =solve(r,b);
        // cout<<ans2;
        return max(ans1,ans2);
        
      
       
    }
};
