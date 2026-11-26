class Solution {
public:
    bool canAliceWin(int n) {
        // if(n<10) return false;
        int minus = 10;
        int turn1 = 0, turn2 = 1;
        while(n > 0)
        {
            n -= minus--;
            swap(turn1,turn2); 
        }
        if(n==0) return turn1;
        return turn2;

    }
};