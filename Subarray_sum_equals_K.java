class Solution {
    public int subarraySum(int[] nums, int k) {
        int sum = 0, ans = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        hm.put(0,1);

        for(int i=0; i<nums.length; i++)
        {
            sum += nums[i];
            if(hm.containsKey(sum - k))
            {
                ans += hm.get(sum-k);
            }
            hm.put(sum, hm.getOrDefault(sum, 0) + 1);
        }
        return ans;
    }
}
