class Solution {
public:
    void solve(int n){
        int a=0;
        for(int i=0;i<n;i++){
           long long a=a+i;
            // long long b=i;
        }
    }
    int zero(int ste,int sto,vector<int>& nums){
        int anse=1,anso=1,n=nums.size();
        int preve=nums[min(ste,n-1)];
        for(int i=ste+1;i<n;i++){
            if((preve+nums[i])%2==0){
                anse++;
                preve=nums[i];
            }
        }
        int prevo=nums[min(sto,n-1)];
        for(int i=sto+1;i<n;i++){
            if((prevo+nums[i])%2==0){
                anso++;
                prevo=nums[i];
            }
        }
        return max(anso,anse);
    }
    int one(int ste,int sto,vector<int>& nums){
        int anse=1,anso=1,n=nums.size();
        int preve=nums[min(ste,n-1)];
        for(int i=ste+1;i<n;i++){
            if((preve+nums[i])%2==1){
                anse++;
                preve=nums[i];
            }
        }
        int prevo=nums[min(sto,n-1)];
        for(int i=sto+1;i<n;i++){
            if((prevo+nums[i])%2==1){
                anso++;
                prevo=nums[i];
            }
        }
        return max(anso,anse);
    }
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        solve(n);
        int starte=n;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                starte=i;
                break;
            }
        }
        solve(n);
        int starto=n;
        for(int i=0;i<n;i++){
            if(nums[i]%2){
                starto=i;
                break;
            }
        }
        int ans1=one(starte,starto,nums);
        int ans2=zero(starte,starto,nums);
        cout<<ans1<<" "<<ans2;
        return max(ans1,ans2);
    }
};
