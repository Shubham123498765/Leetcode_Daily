class Solution {
public:
    int maxBottlesDrunk(int numbf, int numex) {
        int numdr=numbf;
        int numeb=numbf;
        numbf=0;
        for(numbf;numeb>=numex;){
            numeb=numeb-numex;
            numex++;
            numbf++;
            numdr++;
            numeb+=numbf;
            numbf=0;
        }return numdr;
    }
};
