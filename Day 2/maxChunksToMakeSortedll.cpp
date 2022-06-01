class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=1;
        int n = arr.size();
        vector<int> maxOfLeft(n);
        vector<int> minOfRight(n);
        maxOfLeft[0] = arr[0];
        for (int i = 1; i < n; i++)
            maxOfLeft[i] = max(maxOfLeft[i - 1], arr[i]);
            minOfRight[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
            minOfRight[i] = min(minOfRight[i + 1], arr[i]);
        for (int i = 0; i < n - 1; i++) {
            if (minOfRight[i + 1] >= maxOfLeft[i])
                ans++;
        }
        return ans;
    }
};