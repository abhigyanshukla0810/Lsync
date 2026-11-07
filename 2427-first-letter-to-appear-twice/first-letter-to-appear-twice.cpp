class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26] = {0};
        for(char x : s)
        {
            arr[x-'a']++;
            if(arr[x-'a'] > 1) return x;
        }
        return 'a';
    }
};