#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int c = x;
        int reverse = 0;

        while (c > 0) {
            int digit = c % 10;

             if (reverse > INT_MAX / 10 ||(reverse == INT_MAX / 10 && digit > 7))
              {
                return false;
              }
            reverse = reverse * 10 + digit;
            c /= 10;
        }

        return reverse == x;
    }
};