class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) { 
            // carry
            int carry = (a & b) << 1;
            
            // sum without considering the carry
            a = a ^ b;
            
            // Set b to carry for the next iteration
            b = carry;
        }
        return a;
    }
};
