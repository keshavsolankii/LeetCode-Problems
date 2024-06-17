class Solution{

	public:
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    int count=0;
	    for(int i=0; i<M; i++)
	    {
	        while(V >= coins[i]){
	            V = V-coins[i];
	            count++;
	        }
	    }
	    return count;
        
	} 
};
