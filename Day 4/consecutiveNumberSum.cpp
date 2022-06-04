class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 1;
        for (long int i = 1; i * (i + 1) < 2 * n; i++) {
            double a = (1.0 * n - (i * (i + 1)) / 2) / (i + 1);
            if (a - (int)a == 0.0)
                count++;
        }
        return count;
    }
};