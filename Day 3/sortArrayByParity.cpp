class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size(), count=0, j=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
                count++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[j]=nums[i];j++;
            }else{
                ans[count]=nums[i];count++;
            }
        }
        return ans;
    }
};