/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let low = 0;
    let high = nums.length;
    let med = Math.floor((high+low)/2);
    let existe = false;
    
    while(low < high){
        med = Math.floor((high+low)/2);
        
        if(target === nums[med]){
            return med;
        }
        
        if (target < nums[med]){
            high = med;
        } else {
            low = med + 1;
        }
    }

    
   return low;
    
};
