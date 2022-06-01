#define MOD (1'000'000'000 + 7)

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        // long long ans = INT_MIN, curr_max = 0, n = arr.size();
        // for(long long i=0;i<n*k;i++){
        //     curr_max+=arr[i%n];
        //     if(ans<curr_max)
        //         ans = curr_max;
        //     if(curr_max<0)
        //         curr_max = 0;
        // }
        // if(ans<0)
        //     ans = 0;
        // return int(ans);
        int64_t total = accumulate(arr.begin(), arr.end(), 0);
        int sum = 0, max_sum = 0, n = arr.size();
        for (int i = 0; i < n * min(k, 2); ++i) {
            sum = max(arr[i % n], sum + arr[i % n]);//sum: maximum subarray sum ending with arr[i]
            max_sum = max(sum, max_sum);// max_sum: maximum subarray sum in arr[0..i]
        }
        if (k <= 2 || total <= 0)
            return max_sum % MOD;
        return (max_sum + (k - 2) * total) % MOD;
    }
};