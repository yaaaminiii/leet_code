class Solution {
public:
    int reverse(int x) {
        int rev = 0;
    while (x != 0) {
        int digit = x % 10;
        if (rev > INT32_MAX / 10 || (rev == INT32_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (rev < INT32_MIN / 10 || (rev == INT32_MIN / 10 && digit < -8)) {
            return 0;
        }

        rev = rev * 10 + digit;
        x /= 10;
    }
    return rev;     
    }
};
   
