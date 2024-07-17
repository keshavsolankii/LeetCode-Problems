class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(), in.end());

        int i=0;
        for(i=0; i<in.size(); i++)
        {
            int start = in[i][0];
            int end = in[i][1];

            if(!ans.empty() && end <= ans.back()[1])
                continue;

            for(int j=i+1; j<in.size(); j++)
            {
                if(in[j][0] <= end)
                    end = max(end, in[j][1]);
                else{
                    break;
                }
            }
            ans.push_back({start, end});
            
        }
        return ans;
    }
};
