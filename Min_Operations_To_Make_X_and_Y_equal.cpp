class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        deque<pair<int, int>> queue;
        unordered_set<int> visited;

        int count=0;
        queue.push_back({x, 0});
        visited.insert(x);

        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop_front();

            int value = current.first;
            int operations = current.second;

            if (value == y) {
                return operations;
            }
            
            if (visited.find(value + 1) == visited.end()) {
                queue.push_back({value + 1, operations + 1});
                visited.insert(value + 1);
            }

            if (visited.find(value - 1) == visited.end()) {
                queue.push_back({value - 1, operations + 1});
                visited.insert(value - 1);
            }

            if (value % 5 == 0 && visited.find(value / 5) == visited.end()) {
                queue.push_back({value / 5, operations + 1});
                visited.insert(value / 5);
            }

            if (value % 11 == 0 && visited.find(value / 11) == visited.end()) {
                queue.push_back({value / 11, operations + 1});
                visited.insert(value / 11);
            }
        }
        return -1;
    }
};
