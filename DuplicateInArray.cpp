#include<iostream>
using namespace std;

int dupArr(int arr[], int n)
{
	int i, ans=0;
	for(i=0; i<n; i++)
	{
		ans = ans^arr[i];
	}
	for(i=0; i<n; i++)
	{
		ans = ans^i;
	}
	return ans;
}

int main()
{
	int arr[] = {1,2,3,4,5,5};
	int ans = dupArr(arr, 6);
	cout<<ans;
}
