class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n = stones.size();
        int x=0, y=0;

        if(n == 1)
            return stones[0];

        for(int i=0; i<n; i++)
        {
            pq.push(stones[i]);
        }
        for(int i=0; i<n; i++)
        {
            x = pq.top();
            pq.pop();

            if(x == pq.top()){
                pq.pop();
                if(pq.empty())
                    return 0;
            }
            else if(x > pq.top()){
                y = x-pq.top();
                pq.pop();
                pq.push(y);
            }
            else{
                y = pq.top()-x;
                pq.pop();
                pq.push(y);
            }
        }
        if(pq.empty())
            return 0;

        return pq.top();
    }
};
