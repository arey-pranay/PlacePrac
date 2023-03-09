/*The intuition behind this approach is that the rotated sorted array can be divided into two parts, one part is still sorted, and the other part is also sorted, but the minimum element of the array is somewhere in the middle of the array. 
We can identify which part of the array is still sorted by comparing the middle element of the array with the first element of the array. 
If the middle element is greater than or equal to the first element, then the left part of the array is sorted, and if the middle element is less than the first element, then the right part of the array is sorted.
Once we have identified which part of the array is sorted, we can check if the target element is present in the sorted part of the array using the regular Binary Search algorithm. If the target element is not present in the sorted part of the array, 
we can search for it in the other part of the array by recursively calling the same Binary Search algorithm on that part.*/

class Solution {
public:

        
    int search(vector<int>& nums, int target) {
        int size=nums.size();
       int s=0,e=size-1,m=0;
        while(s<=e){
                m=s+(e-s)/2;
                if(nums[m]==target) return m;
                if(nums[m]>=nums[s]){
                if(nums[m]>=target && nums[s]<=target) e=m-1;
                else s=m+1;}
                else{
                    if(nums[m]<=target && nums[e]>=target) s=m+1;
                    else e=m-1;
                }
        }
        return -1;
        

        
    }
};
