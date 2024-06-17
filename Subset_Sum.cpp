class Solution {
  public:
  
    void getSum(int index, int sum, vector<int> &arr, vector<int> &ans, int n)
    {
        if(index == n){
            ans.push_back(sum);
            return;
        }
        
        getSum(index+1, sum+arr[index], arr, ans, n);
        
        //Don't pick the element
        getSum(index+1, sum, arr, ans, n);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        int i = 0;
        int sum=0;
        
        getSum(i, sum, arr, ans, n);
        
        return ans;
    }
};
