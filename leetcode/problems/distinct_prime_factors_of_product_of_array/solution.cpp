class Solution {
public:
    int distinctPrimeFactors(vector<int>& a) {
      // use set to store distinct factors
    unordered_set<int> m;
 
    // iterate over every element of array
    for (int i = 0; i < a.size(); i++) {
        int sq = sqrt(a[i]);
 
        // from 2 to square root of number run
        // a loop and check the numbers which
        // are factors.
        for (int j = 2; j <= sq; j++) {
            if (a[i] % j == 0) {
 
                // if j is a factor store it in the set
                m.insert(j);
 
                // divide the number with j till it
                // is divisible so that only prime factors
                // are stored
                while (a[i] % j == 0) {
                    a[i] /= j;
                }
            }
        }
 
        // if the number is still greater than 1 then
        // it is a prime factor, insert in set
        if (a[i] > 1) {
            m.insert(a[i]);
        }
    }
 
    // the number of unique prime factors will
    // the size of the set
    return m.size();  
    }
};