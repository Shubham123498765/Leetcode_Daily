class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
   int count=0;
        int preflen=pref.size();        //step 1
        
        for(auto i:words){
            if(i.substr(0,preflen) == pref)     //step 2
                count++;                        //if both matches then increment count by 1
            
        }
        return count;     
    }
};
