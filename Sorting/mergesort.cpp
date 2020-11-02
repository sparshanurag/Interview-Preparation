#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid , int high){
   int i,j,k,temp[high-low-1];
   i=low;
   j=mid+1;
   k=0;
   
   while(i<=mid && j<=high)
   {
       if(arr[i]<=arr[j])
       {
           temp[k++]=arr[i++];
       }
       else
       {
           temp[k++]=arr[j++];
       }
    
   }
   
   while(i<=mid)
   {
       temp[k++]= arr[i++];
   }
   
   while(j<=high)
   {
       temp[k++]= arr[j++];
   }
   
   for(int i=low; i<=high;i++)
   {
       arr[i] = temp[i-low];
   }
}   
   
void mergesort(int arr[], int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
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
    
    mergesort(arr,0,n-1);
    printarray(arr,n);
}
