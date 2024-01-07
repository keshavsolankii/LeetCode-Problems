class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1, index=0;
        for(int i=0; i<nums.size(); i++)
        {
            mul *= nums[i];
            if(mul == 0){
                index = i;
                break;
            }
        }
        int mulwithzero=1;
        for(int i=0; i<nums.size(); i++)
        {
            if(i != index)
                mulwithzero *= nums[i];
        }
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
                ans.push_back(mul/nums[i]);
            else
                ans.push_back(mulwithzero);
        }
        return ans;
    }
};
