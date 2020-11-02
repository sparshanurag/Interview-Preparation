#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

void printarray(int arr[], int n){
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    InsertionSort(arr,n);
    printarray(arr,n);
    return 0;
}
