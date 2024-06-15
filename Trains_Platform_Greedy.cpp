class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;
        
        auto compare = [](const pair<int, int> &a, const pair<int, int> &b){
            return a.second < b.second;
        };
        
        for(int i=0; i<n; i++)
        {
            v.push_back({start[i], end[i]});
        }
        
        sort(v.begin(), v.end(), compare);
        
        int count=1, limit=v[0].second;
        
        for(int i=1; i<n; i++)
        {
            if(v[i].first > limit){
                count++;
                limit = v[i].second;
            }
        
        }
        return count;
    }
};
