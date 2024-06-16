class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        vector<pair<double, int>> v(n);
        
        for(int i=0; i<n; i++)
        {
            v[i].first = (double) arr[i].value/ (double) arr[i].weight;
            v[i].second = i;
        }
        auto compare = [](pair<double, int> &a, pair<double, int> &b){
            return a.first > b.first;
        };
        
        sort(v.begin(), v.end(), compare);
        
        double netWeight = 0.0, netValue = 0.0;
        double rem = w-netWeight;
        
        for(int i=0; i<n; i++)
        {
            int index = v[i].second;
            if(arr[index].weight <= rem){
                netWeight += arr[index].weight;
                netValue += arr[index].value;
            }
            else{
                netValue += (double)arr[index].value*(double)rem/(double)arr[index].weight;
                break;
            }
            rem = w-netWeight;
        }
        return netValue;
    }
};
