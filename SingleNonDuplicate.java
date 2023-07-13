class Solution {
    public int singleNonDuplicate(int[] nums) {
        int s = 0, e = nums.length-1;

        if(nums.length == 1)
            return nums[0];
        // Eliminating the first and the last index
        if(nums[0] != nums[1])
            return nums[0];
        if(nums[e] != nums[e-1])
            return nums[e];
        
        s++; e--;
        
        while(s <= e)
        {
            int mid = s + (e-s)/2;
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
                return nums[mid];
            if((mid % 2 != 0 && nums[mid-1] == nums[mid]) || (mid % 2 == 0 && nums[mid+1] == nums[mid]) )
            {
                s = mid+1;
            }
            else
                e = mid-1;
        }
        return -1;
    }
}
