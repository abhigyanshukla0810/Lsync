class Solution {
public:
    bool checkDivisibility(int n) {
        string sex = to_string(n);
        int sum = 0;
        for(char x :sex) sum+= x - '0';
        int condom = 1;
        int pussy = n;
        while(pussy>0){
            condom *= pussy%10;
            pussy /=10;
        }
        sum += condom;
        if(n%sum == 0) return true;
        return false;
    }
};