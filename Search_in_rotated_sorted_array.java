// Approach:-
// Initialize the start (s) and end (e) indices to the first and last positions in the array.
// Calculate the middle index (mid) using the formula s + (e - s) / 2. This formula ensures that the middle index is updated correctly in each iteration.
// Enter a while loop that continues until the start index (s) is less than or equal to the end index (e).

// Inside the loop:
// Check if the value at the middle index (nums[mid]) is equal to the target value. If true, return true as the target is found.

// Check if the start value (nums[s]) is equal to the middle value (nums[mid]) and the middle value is equal to the end value (nums[e]). This condition handles the case where the array contains duplicates at both ends and skips those duplicate values by incrementing s and decrementing e by 1.

// Check if the values in the range from s to mid are in ascending order. If true, it means that the left half of the array is sorted.

// Check if the target value is within the sorted left half (nums[s] <= target <= nums[mid]). If true, update the end index (e) to mid - 1 to search in the left half. Otherwise, update the start index (s) to mid + 1 to search in the right half.

// If the values in the left half are not sorted, it means the right half is sorted.

// Check if the target value is within the sorted right half (nums[mid] <= target <= nums[e]). If true, update the start index (s) to mid + 1 to search in the right half. Otherwise, update the end index (e) to mid - 1 to search in the left half.

// Update the middle index (mid) based on the new start and end indices.
// If the while loop completes without finding the target value, return false.



class Solution {
    public boolean search(int[] nums, int target) {
        int s = 0, e = nums.length-1;
        int mid = s+(e-s)/2;

        while(s <= e)
        {
            if(nums[mid] == target)
                return true;

            else if(nums[s] == nums[mid] && nums[mid] == nums[e])
            {
                s += 1; e -= 1;
            }

            else if(nums[s] <= nums[mid])
            {
                if(target >= nums[s] && target <= nums[mid])
                    e = mid-1;
                else
                    s = mid+1;
            }
            else
            {
                if(target >= nums[mid] && target <= nums[e])
                    s = mid+1;
                else
                    e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }
}
