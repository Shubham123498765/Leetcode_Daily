class Solution {
public:
    void generatestring(int n,string curr,vector<string>& result){
        if(curr.length()==n){
            result.push_back(curr);
            return;
        }

        generatestring(n,curr+'1',result);
        if(curr.empty()||curr.back()=='1'){
            generatestring(n,curr+'0',result);
        }
    }

    vector<string> validStrings(int n) {
        vector<string> result;
        generatestring(n, "", result);
        return result;
}
};
