class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        long inc = 0, exc = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>right){
                ans+= ((inc*(inc+1)/2)-(exc*(exc+1)/2));
                inc = 0; exc = 0;
            }else if(nums[i]<left){
                exc++;inc++;
            }else{
                ans -= (exc*(exc+1)/2);
                exc = 0;inc++;
            }
        }
        ans+= ((inc*(inc+1)/2)-(exc*(exc+1)/2));
        return ans;
    }
};