class Solution {
public:
    int minOperations(vector<int>& n) {
        int ct=0,flip=0,s=n.size();
        for(int i=0;i<s;i++){
            if(n[i]==0){
                ct++;
                flip++;
            }
            if(flip==1 && i!=s-1){
                n[i+1]=n[i+1]^1;
            }
            if(flip==2)
                flip=0;
        }
        return ct;
    }
};
