class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // Start from the rightmost digit
        for(int i = n - 1; i >= 0; i--){
            // If the current digit is not 9, simply increment it by 1 and return
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0 and continue to the next digit
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add an additional digit at the beginning
        digits.insert(digits.begin(), 1);
        
        return digits;
    
    }
};
