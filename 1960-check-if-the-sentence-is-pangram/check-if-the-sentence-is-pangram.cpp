class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(char &x : sentence)
        {
            arr[x-'a'] = 1;
        }
        for(int x : arr)
        {
            if( x == 0) return false;
        }
        return true;
    }
};