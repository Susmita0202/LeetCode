class Solution {
    public boolean search(int[] nums, int target) {
        int n = nums.length ;
        int start = 0 ;
        int end = n - 1 ;
        while(start<=end){
            int mid = start + (end-start)/2 ;

            // if mid is target then return true     
                if(nums[mid] == target) return true ; 

            // check if the number is duplicate => shrink the start and end count window
            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                start++ ; // increase the start
                end-- ; // decrease the end
                continue ;
            }
            // checking if left is sorted
            if(nums[start] <= nums[mid]){
                // if start is in the left portion => target must be in start to mid
                if(nums[start] <= target && target<= nums[mid]){
                    end = mid-1 ; // remove right part
                }
                else{ //it is not in the right
                    start = mid + 1 ; // check in the right
                }
            }
            // Case 2 : If the number is in the right 
            else{ 
                if(nums[mid] < target && target<= nums[end]){
                    start = mid + 1 ; // eliminate the first half 
                }
                else{
                    end = mid - 1 ; // eliminate the second half
                }
            }
        }
        return false ; 
    }
}

// ---Note---
// When you detect that nums[start] == nums[mid] == nums[end], it means you cannot determine which half is sorted because duplicates are hiding the structure.

// So you shrink the window:

// start++

// end--

// But after doing this, you must skip the rest of the loop for this iteration
