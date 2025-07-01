//WAP to find the average of N numbers using arrays.

#include<iostream>
using namespace std;

void average(int arr[],int n){
  int sum=0;
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  cout<<"Average of the elements in the array is: "<<float(sum)/n;
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[n];

  average(arr,n);
}