class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // vector<int> arr = nums;
        // int ans, n = arr.size();
        // sort(arr.begin(),arr.end());
        // if(arr[n-1]<2*arr[n-2])
        //     ans = -1;
        // else{
        //     for(int i=0;i<n;i++){
        //         if(arr[n-1]==nums[i]){
        //             ans = i;
        //             break;
        //         }
        //     }       
        // }
        // return ans;
        int maxIndex = 0, len = nums.size();
        for (int i = 0; i < len; ++i)
            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        for (int i = 0; i < len; ++i)            
            if (maxIndex != i && nums[maxIndex] < 2 * nums[i])
                return -1;

        return maxIndex;
    }
};