#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int longestPalindrome(std::string s) {

        vector<int> charCounts(128, 0);
        for (char c : s) {
            charCounts[c]++;
        }
        
        int maxLength = 0;
        bool hasOddCount = false;
        
        for (int count : charCounts) {
        
            maxLength += (count / 2) * 2;
            
                if (count % 2 != 0) {
                    hasOddCount = true;
            }
        }
        
        
        if (hasOddCount) {
            maxLength += 1;
        }
        
        return maxLength;
    }
};