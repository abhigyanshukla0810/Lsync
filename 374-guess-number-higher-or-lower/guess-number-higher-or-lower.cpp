/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n, mid = 0, y = 0;
        while(l <= r){
            mid = l + (r-l)/2;
            y = guess(mid);
            if(y==0) break;
            else if(y==1) l = mid+1;
            else r = mid-1;
        }
        return mid;
    }
};