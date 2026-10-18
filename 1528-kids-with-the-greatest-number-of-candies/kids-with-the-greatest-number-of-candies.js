/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let Max = 0;
    for(let x of candies)
    {
        if(x > Max) Max = x
    }
    let ans = []
    for(let x of candies)
    {
        if(x + extraCandies >= Max) ans.push(true)
        else ans.push(false)
    }
    return ans;
};