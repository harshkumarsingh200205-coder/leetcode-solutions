class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;

        for (int x : nums) {
            if (x == 0)
                return 0;

            if (x < 0)
                negativeCount++;
        }

        return (negativeCount % 2 == 0) ? 1 : -1;
    }
};