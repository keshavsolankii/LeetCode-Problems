#include<iostream>
using namespace std;

int pivotfind(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main()
{
    int arr[] = {7,8,9,10,11,3,4};
    cout<<"The pivot element is at index "<<pivotfind(arr, 7);
    return 0;
}