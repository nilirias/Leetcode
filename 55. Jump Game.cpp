class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        
        int valorMax = nums[0];
        bool sw = false;
        
        for (int i = 0; i < nums.size() && i <= valorMax; i++){
            valorMax = max(valorMax, nums[i]+i);
        }
        
        if (valorMax >= nums.size() -1){
            return true;
        } 
       return sw;
    }
};
