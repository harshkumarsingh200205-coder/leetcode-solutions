class Solution {
public:
    int subtractProductAndSum(int n) {
        int digitProduct = 1;
        int digitSum = 0;
        
        while (n > 0) {
            int digit = n % 10;
            digitProduct *= digit;
            digitSum += digit;
            n /= 10;
        }
        
        return digitProduct - digitSum;
    }
};
