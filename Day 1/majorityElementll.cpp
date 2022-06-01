// Moore's Voting Algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int count1 = 0, count2 = 0, n = nums.size();
        int first=INT_MAX    , second=INT_MAX    ;

        for (int i = 0; i < n; i++) {

            // if this element is previously seen, increment count1.
            if (first == nums[i])
                count1++;

            // if this element is previously seen,increment count2.
            else if (second == nums[i])
                count2++;

            else if (count1 == 0) {
                count1++;
                first = nums[i];
            }

            else if (count2 == 0) {
                count2++;
                second = nums[i];
            }

            // if current element is different from both the previously seen variables,decrement both the counts.
            else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        // Again traverse the array and find the actual counts.
        for (int i = 0; i < n; i++) {
            if (nums[i] == first)
                count1++;

            else if (nums[i] == second)
                count2++;
        }

        if (count1 > n / 3)
            ans.push_back(first);

        if (count2 > n / 3)
            ans.push_back(second);

        return ans;
    }
};