class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        for(int x : students){
            if(x == 1) y1++;
            else x1++;
        }
        for(int x : sandwiches){
            if(x == 1) y2++;
            else x2++;
        }
        if(x1==x2 && y1==y2) return 0;
        for(int x : sandwiches){
            if(x == 1)y1--;
            else x1--;
            if(x1 == -1) return y1;
            if(y1 == -1) return x1; 
        }
        return 0;
    }
};