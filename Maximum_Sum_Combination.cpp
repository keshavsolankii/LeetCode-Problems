vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int n = A.size();
    
    priority_queue<pair<int, pair<int, int>>> pq;
    set<pair<int, int>> s;
    vector<int> ans;
    
    pq.push({A.back() + B.back(), {n-1, n-1}});
    s.insert(n-1, n-1);
    
    while(C--)
    {
        auto p = pq.top();
        int sum = p.first;
        int i = p.second.first;
        int j = p.second.second;
        ans.push_back(sum);
        pq.pop();
        
        if(s.find({i-1, j}) == s.end())
        {
            pq.push({A.back() + B.back(), {i-1, j}});
            s.insert({i-1, j});
        }
        if(s.find({i, j-1}) == s.end())
        {
            pq.push({A.back() + B.back(), {i, j-1}});
            s.insert({i, j-1});
        }
    }
    return ans;
}
