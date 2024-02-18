class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1; // Anything to the power of 0 is 1
        
        double result = 1.0;
        long long power = n; // Use long long to avoid overflow when n = INT_MIN

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        while (power > 0) {
            if (power % 2 == 1) { // If power is odd
                result *= x;
            }
            x *= x; // Square x for the next bit of the exponent
            power /= 2; // Divide power by 2
        }

        return result;
    }
};
