#include<bits/stdc++.h>
using namespace std;

int swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubblesort(int arr[], int n)
{
    int i,j;
    for(int i=0; i<n-1 ;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
