class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> leftPro(n);
        vector<int> rightPro(n);
        leftPro[0]=1;rightPro[n-1]=1;
        for(int i=1;i<n;i++)
            leftPro[i]=leftPro[i-1]*nums[i-1];
        for(int i=n-2;i>=0;i--)
            rightPro[i]=rightPro[i+1]*nums[i+1];
        for(int i=0;i<n;i++)
            ans[i]=leftPro[i]*rightPro[i];
        return ans;
    }
};