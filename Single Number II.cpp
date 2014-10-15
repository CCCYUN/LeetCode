class Solution {
public:
    int singleNumber(int A[], int n) {
        int ones = 0;  
        int twos = 0;  
        for(int i = 0; i < n; i++) {  
            twos ^= ones&A[i];  
            ones ^= A[i];  
            int not_three = ~(ones&twos);  
            ones &= not_three;  
            twos &= not_three;  
        }  
        return ones; 
        
        
    }
};