class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maximumSumSubarray = INT_MIN;
        for(int i=0; i<n; i++){
            int currSum = 0;
            for(int j=i; j<n; j++){
                currSum += nums[j];
                if(currSum > maximumSumSubarray){
                    maximumSumSubarray = currSum;
                }
            }
        }
        return maximumSumSubarray;
    }
};
