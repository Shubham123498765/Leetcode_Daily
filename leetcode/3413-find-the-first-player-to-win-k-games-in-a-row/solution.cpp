class Solution {
public:
    void f(int a,int b){
            long long sum;
        for(int i=0;i<a+b;i++){
           
            sum=sum+i;
        }
    };

    int findWinningPlayer(vector<int>& skill, int k) {
        
        int n=skill.size();
        f(n,n+1);
        int i=0;
        int maxi=skill[i];
        int maxi_ind=0;
        int temp=k;
        for( i=1;i<n;i++){
            if(temp==0)
            break;
            temp--;
            if(skill[i]>maxi){
                maxi=skill[i];
                maxi_ind=i;
                temp=k-1;
            }
        }
        return maxi_ind;
    }
};
