// other parts is available in LeetCode Problem  
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        ans = nums;
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=ans[i];
        }
    }
};