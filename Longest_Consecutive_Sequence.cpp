class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]] = true;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(mp.count(nums[i] - 1) > 0)
                mp[nums[i]] = false;    //  It is not the starting point of the sequence
        }
        // Now we have those value true which are starting point of the sequence

        int maxi=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]] == true)
            {
                int j=0, count=0;
                while(mp.count(nums[i] + j) > 0)
                {
                    count++;
                    j++;
                }
                if(count > maxi)
                {
                    maxi = count;
                    count=0;
                }
            }
        }
        return maxi;
    }
};
