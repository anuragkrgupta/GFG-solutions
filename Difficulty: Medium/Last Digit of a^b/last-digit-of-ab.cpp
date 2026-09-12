class Solution {
public:
    int getLastDigit(string& a, string& b) {

        int base = a.back() - '0';

        int exponent = 0;

        for(char c : b) {
            exponent = (exponent * 10 + (c - '0')) % 4;
        }

        bool isZero = true;
        for(char c : b) {
            if(c != '0') {
                isZero = false;
                break;
            }
        }

        if(isZero)
            return 1;

        if(exponent == 0)
            exponent = 4;

        int ans = 1;

        for(int i = 0; i < exponent; i++) {
            ans = (ans * base) % 10;
        }

        return ans;
    }
};