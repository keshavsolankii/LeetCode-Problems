class Solution {
    public int maximum(int []nums) //Finding the maximum element in the array
    {
        int maxi=nums[0];
        for(int i=1; i<nums.length; i++)
        {
            if(maxi < nums[i])
                maxi = nums[i];
        }
        return maxi;
    }
    public int findSum(int nums[])  //Finding the sum of all elements in the array
    {
        int sum=0;
        for(int i=0; i<nums.length; i++)
        {
            sum += nums[i];
        }
        return sum;
    }
    public int countk(int[] nums, int sum)
    {
        int tempSum = 0;
        int cntk = 1;
        for(int i=0; i<nums.length; i++)
        {
            if((tempSum + nums[i]) <= sum )
                tempSum += nums[i];
            else{
                cntk++;
                tempSum = nums[i];
            }
        }
        return cntk;
    }
    public int splitArray(int[] nums, int k) {
        int s = maximum(nums), e = findSum(nums);
        int mid = s+(e-s)/2;

        while(s <= e)
        {
            if(countk(nums, mid) > k)
                s = mid+1;
            else
                e = mid-1;

            mid = s+(e-s)/2;
        }
        return s;
    }
}
