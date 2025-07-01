//WAP to find the largest element stored in an array

#include<iostream>
using namespace std;

int maximum(int arr[],int n){
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max) max=arr[i];
  }
  cout<<max;
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[n];

  maximum(arr,n);
}