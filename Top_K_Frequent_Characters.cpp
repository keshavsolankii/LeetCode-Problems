class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> fmap;

        // Count the frequency of each element
        for (int ele : nums)
            fmap[ele]++;

        // Custom comparator to sort elements based on frequency in descending order
        auto compare = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        };

        // Convert the unordered_map to a vector of pairs
        vector<pair<int, int>> freqVector(fmap.begin(), fmap.end());

        // Sort the vector based on frequency using the custom comparator
        sort(freqVector.begin(), freqVector.end(), compare);

        // Extract the top k frequent elements from the sorted vector
        for (int i = 0; i < k; ++i)
            ans.push_back(freqVector[i].first);
        

        return ans;
    }
};
