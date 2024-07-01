class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0,n=arr.size();
        // if(n<3) return false;
        // int j=2;
        for(int i=0;i<n-2;i++)
        {
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
        return false;
    }
};
