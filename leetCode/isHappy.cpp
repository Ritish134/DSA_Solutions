class Solution {
public:
    bool isHappy(int n) {
        int temp = n;
        while (temp != 1 && temp != 4) { // as 4 infinetly loops
            int sum = 0;
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            temp = sum;
        }
        return temp == 1;
    }
};
