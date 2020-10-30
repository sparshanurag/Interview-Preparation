#include<bits/stdc++.h>
using namespace std;

int findMissingNo(int arr[], int n)
{
    int total = (n + 1) * (n + 2) / 2;
    for(int i=0; i<n;i++)
    {
        total = total - arr[i];
    }
    
    return total;
}

int main(){
    
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findMissingNo(arr, n);
    return 0;
    
}
