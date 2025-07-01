//WAP to create an array that can store N integers and display the contents of the array

#include<iostream>
using namespace std;

void create(int arr[],int n){
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Elements in the array are:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[n];

  create(arr,n);
}