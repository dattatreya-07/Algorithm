#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
   int lar=i;
   int left=2*i+1;
   int right=2*i+2;
   if(left<n && arr[left]>arr[lar])
      lar=left;
   if(right<n && arr[right]>arr[lar])
      lar=right;
   if(lar!=i){
      swap(arr[i],arr[lar]);
      heapify(arr,n,lar);
   }
}
void heapsort(int arr[],int n){
   for(int i=n/2;i>=0;i--){
      heapify(arr,n,i);
   }
   for(int i=n-1;i>0;i--){
      swap(arr[0],arr[i]);
      heapify(arr,i,0);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<"\n";
   }
}
int main(){
   int n;
   cout<<"Enter the number of elements:";
   cin>>n;
   int arr[n];
   cout<<"Enter elements:\n";
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   heapsort(arr,n);
   cout<<"Sorted array:\n";
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   return 0;
