class Solution {
public:
    double average(vector<int>& salary) {
        int Max = INT_MIN;
        int Min = INT_MAX;
        int sum = 0;
        int n = salary.size();
        n = n-2;
        for(int &x : salary)
        {
            if(x > Max) Max = x;
            if(x < Min) Min = x;
            sum+=x;
        }
        double total = sum - Min - Max;
        double average = total/n;
        return average;
    }
};