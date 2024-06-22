class Solution {
public:
    int minOperations(vector<int>& n) {
        int ct=0;
        for(int i=0;i<n.size()-2;i++){
            if(n[i]==0){
                n[i]=n[i]^1;
                n[i+1]=n[i+1]^1;
                n[i+2]=n[i+2]^1;
                ct++;
            }
        }
            if(n[n.size()-2]==0 || n[n.size()-1]==0)
                return -1;
            else 
                return ct;
        
    }
};
