// Approach
// Here's how the code works:

// It initializes the left pointer to the start of the array (0) and the right pointer to the end of the array (height.length - 1).

// It also initializes maxLeft and maxRight variables to keep track of the maximum bar heights encountered from the left and right sides, respectively. Initially, both are set to 0.

// It initializes the totalWater variable to keep track of the total amount of trapped water.

// The code enters a loop that continues as long as the left pointer is less than or equal to the right pointer. This loop iterates over the array from both ends towards the center.

// Inside the loop, it checks which side has a smaller height between height[left] and height[right]. If height[left] is smaller or equal, it means the left side is lower or at the same height as the right side, so it proceeds with the left side calculations. Otherwise, it means the right side is lower, so it proceeds with the right side calculations.

// For the left side calculations, it checks if the current bar height (height[left]) is greater than or equal to the maxLeft variable. If it is, it updates maxLeft to the new maximum height. Otherwise, it calculates the water trapped at the current position by subtracting the current bar height from maxLeft and adds it to the totalWater variable.

// After the left side calculations, it increments the left pointer to move to the next bar on the left side.

// For the right side calculations, it performs similar operations. It checks if the current bar height (height[right]) is greater than or equal to the maxRight variable. If it is, it updates maxRight to the new maximum height. Otherwise, it calculates the water trapped at the current position by subtracting the current bar height from maxRight and adds it to the totalWater variable.

// After the right side calculations, it decrements the right pointer to move to the next bar on the right side.

// The loop continues until the left pointer becomes greater than the right pointer, indicating that all bars have been processed.

// Finally, it returns the totalWater variable, which represents the total amount of water that can be trapped between the bars.

class Solution {
    public int trap(int[] height) {
        int left = 0, right = height.length-1;
        int maxLeft = 0, maxRight = 0;
        int totalWater = 0;

        while(left <= right)
        {
            if(height[left] <= height[right])
            {
                if(height[left] >= maxLeft)
                    maxLeft = height[left];
                else
                    totalWater += maxLeft - height[left];
                left++;
            }
            else
            {
                if(height[right] >= maxRight)
                    maxRight = height[right];
                else
                    totalWater += maxRight - height[right];
                right--;
            }
        }
        return totalWater;
    }
}
