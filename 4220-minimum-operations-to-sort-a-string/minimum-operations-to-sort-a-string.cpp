class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(is_sorted(begin(s),end(s)))
        {
            return 0;
        }
        if(n==2) return -1;
        char minchar = *min_element(begin(s),end(s));
        char maxchar = *max_element(begin(s),end(s));
        if(s[0] == minchar || s[n-1] == maxchar)
        {
            return 1;
        }
        char minmid = *min_element(begin(s)+1,end(s)-1);
        char maxmid = *max_element(begin(s)+1,end(s)-1);
        
        if(s[0] > maxmid && s[n-1] < minmid)
        {
            return 3;
        }
        return 2;
    }
};