#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t-- > 0)
    {
        int a, b;
        cin>>a>>b;
        
        vector<int> arrA(a), arrB(b);
        int c;
        for(int i=0; i<a; i++)
        {
            cin>>arrA[i];
        }
        for(int i=0; i<b; i++)
        {
            cin>>arrB[i];
        }
        
        sort(arrB.begin(), arrB.end());
        
        int maxi = arrB[b-1];
        int index = a-maxi;
        
        sort(arrA.begin() + index, arrA.end());
        
        for(int i=0; i<a; i++)
        {
            cout<<arrA[i]<<" ";
        }
        cout<<endl;
        
        arrA.clear();
        arrB.clear();
        
    }
}
