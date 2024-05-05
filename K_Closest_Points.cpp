class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> dist;

        int d=0;
        for(int i=0; i<points.size(); i++)
        {
            d = pow(points[i][0], 2) + pow(points[i][1], 2);
            dist.push(make_pair(d, make_pair(points[i][0], points[i][1])));
        }

        for(int i=0; i<points.size()-k; i++)
        {
            auto x = dist.top();
            dist.pop();
        }

        for(int i=0; i<k; i++)
        {
            auto x = dist.top();
            dist.pop();

            ans.push_back(vector<int> {x.second.first, x.second.second});
        }
        return ans;

    }
};
