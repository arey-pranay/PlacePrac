/*  Time Complexity : O(NlogN), Sorting creates the time complexity. Where N is the size of the array(nums).
    Space complexity : O(1), Constant space. */


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};
