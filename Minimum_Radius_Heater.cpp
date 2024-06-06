class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        vector<int> ans(houses.size(), INT_MAX);

        //calculate nearest RHS heater for each house
        
        for(int i=0, j=0; i<houses.size() && j<heaters.size(); )
        {
            if(houses[i] <= heaters[j]){
                ans[i] = heaters[j] - houses[i];
                i++;
            }
            else
                j++;
        }
        //calculate nearest LHS heater for each house and take minimum
       
        for(int i=houses.size()-1, j = heaters.size()-1; i >= 0 && j >= 0; )
        {
            if(houses[i] >= heaters[j]){
                ans[i] = min(ans[i], houses[i]-heaters[j]);
                i--;
            }
            else
                j--;
        }
        return *max_element(ans.begin(), ans.end());
    }
};
