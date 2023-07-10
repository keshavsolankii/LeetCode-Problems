class Solution {
    public int findMin(int[] nums) {
        int s=0, e=nums.length-1;
        int mid  = s+(e-s)/2;

        while(s < e)
        {
            if(nums[mid] >= nums[0] && nums[e] >= nums[0])
                e=mid-1;
            else if(nums[mid] >= nums[0])
                s=mid+1;
            else
                e = mid;
            mid = s+(e-s)/2;
        }
        return nums[s];
    }
}
