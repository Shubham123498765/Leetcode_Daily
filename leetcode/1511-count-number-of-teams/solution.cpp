class Solution {
public:
    int ans=0;
    void check(vector<int>& per){
        int i=0;
        if(per[i]<per[i+1] && per[i+1]<per[i+2])
            ans++;
        if(per[i]>per[i+1] && per[i+1]>per[i+2])
            ans++;
    }
    bool check2(int a,int b,int c){
        if((a<b && b<c) || (a>b && b>c))
            return true;
        return false; 
    }


    void generate(vector<int>& rating,vector<int>& per,int i,int n){
        if(per.size()==3){
            check(per);
            return;
        }
        if(i>=n) return;
        per.push_back(rating[i]);
        generate(rating,per,i+1,n);
        per.pop_back();
        generate(rating,per,i+1,n);
    }
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        // vector<int> per;
        // generate(rating,per,0,n);
        // return ans;
        int ans1=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(check2(rating[i],rating[j],rating[k]))
                        ans1++;
                }
            }
        }
        return ans1;
    }
};
