class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> aux;
        
        int contZero = 0;
        int contUno = 1;
        int contDos = 2;
        
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                contZero++;
            }
            
            if (nums[i] == 1){
                contUno++;
            }
            
            if (nums[i] == 2){
                contDos++;
            }
        }
        
        nums.clear();
        
        for(int i = 0; i < contZero; i++){
            nums.push_back(0);
        }
        
        for(int i = 0; i < contUno - 1; i++){
            nums.push_back(1);
        }
        
        for(int i = 0; i < contDos - 2; i++){
            nums.push_back(2);
        }    
    }
};
