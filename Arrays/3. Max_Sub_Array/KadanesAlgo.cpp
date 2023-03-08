/*

    Time Complexity : O(N), Since we traversed the array(nums) only ones. Where N is the size of the nums.

    Space Complexity : O(1), Constant space.
    
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0, maximumSumSubarray = INT_MIN;
        for(auto num : nums){
            currSum += num;
            if(currSum > maximumSumSubarray){
                maximumSumSubarray = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maximumSumSubarray;
    }
};
