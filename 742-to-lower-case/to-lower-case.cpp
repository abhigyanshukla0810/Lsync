class Solution {
public:
    string toLowerCase(string s) {
        for(char &x : s){
            if(x<91 && x>=65) x += 32; 
        }
        return s;
    }
};