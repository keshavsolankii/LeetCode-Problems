class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left=0, right=n-1;
        int ans=0, area = 0;
        while(left < right)
        {
            area = (right-left)*min(height[left], height[right]);
            ans = max(ans, area);
            if(height[left] < height[right])
                left++;
            else if(height[left] > height[right])
                right--;
            else{
                right--; left++;
            }
        }
        return ans;
    }
};
