//WAP to find the second largest element in an array.

#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
  int max=arr[1];
  int secondmax=arr[0];
  if(arr[0]>arr[1]){
    max=arr[0];
    secondmax=arr[1];
  }
  for(int i=2;i<n;i++){
    if(arr[i]>max){
      secondmax=max;
      max=arr[i];
    }
    else if(arr[i]<max && arr[i]>secondmax){
      secondmax=arr[i];
    }
  }
  cout<<secondmax;
}

int main(){
  int n;
  cout<<"Enter number of elements in the array:\n ";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  secondLargest(arr,n);
}