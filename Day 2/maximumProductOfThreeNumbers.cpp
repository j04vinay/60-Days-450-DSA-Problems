class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // int ans, n = nums.size();
        // if(n==3)
        //     ans = nums[0]*nums[1]*nums[2];
        // else{
        //     sort(nums.begin(),nums.end());
        //     int temp = nums[n-1]*nums[n-2]*nums[n-3];
        //     if(nums[0]>=0 || nums[n-1]<0){
        //         ans = temp;
        //     }else{
        //         ans = nums[0]*nums[1]*nums[n-1];
        //         if(temp>ans)
        //             ans = temp;
        //     }
        // }
        // return ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
    }
};