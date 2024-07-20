class Solution {
public:
    string losingPlayer(int x, int y) {
        int toggle=0;
        while(x>=1 && y>=4){
            x--;
            y=y-4;
            toggle=toggle^1;
        }
        if(toggle) return "Alice";
        else return "Bob";
    }
};
