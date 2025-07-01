//WAP to find out the sum of the N numbers stored in an array of integers.

#include<iostream>
using namespace std;

void sum(int arr[],int n){
  int sum=0;
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  cout<<"Sum of the elements in the array is: "<<sum;
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[n];

  sum(arr,n);
}