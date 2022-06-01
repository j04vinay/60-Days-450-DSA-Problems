class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, curr_max = 0;
        for(int i=0;i<nums.size();i++){
            curr_max += nums[i];
            if(ans<curr_max)
                ans = curr_max;
            if(curr_max<0)
                curr_max = 0;
        }
        return ans;
    }
};