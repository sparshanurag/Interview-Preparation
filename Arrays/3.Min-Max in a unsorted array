#include<iostream>
using namespace std;

void findMinMax(int arr[] ,int n)
{
    int max=arr[0];
    int min=arr[0];
    
    for(int i=0; i<n;i++)
    {
        if(max<arr[i])
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }
    
    cout<<"Max - "<<max<<endl;
    cout<<"Min - "<<min<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    findMinMax(arr,n);
    return 0;
}
