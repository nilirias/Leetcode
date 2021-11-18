/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    let s = new Set(nums);
    let ans = [];
    
    for (let i = 1; i <= nums.length; i++){
        if(!s.has(i)){
            ans.push(i);
        }
    }
    
    return ans;
};
