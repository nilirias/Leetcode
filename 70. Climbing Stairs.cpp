class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1 || n == 2){
            return n;
        }
        
        vector <int> combinaciones(n+1,0);
        combinaciones[1] = 1;
        combinaciones[2] = 2;
        
        for (int i = 3; i <=n; i++){
            combinaciones[i] = combinaciones[i-1] + combinaciones[i-2];
        }

        return combinaciones[n];
    }
};

