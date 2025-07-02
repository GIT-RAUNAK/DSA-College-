//Reverse the elements of an array

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
  int start=0,end=n-1;
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
  cout<<"Reverse of the given array:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  reverse(arr,n);
}