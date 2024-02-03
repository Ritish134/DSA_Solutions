class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            count += n&1; // and with one to check rightmost digit
            n >>= 1; // right shift by one digit
        }
        return count;
    }
};
