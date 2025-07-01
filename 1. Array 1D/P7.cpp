//WAP to Count the total number of duplicate elements in an array.

#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
  int count=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        count++;
        break;
      }
    }
  }
  cout<<"Total number of duplicate elements found in the array is "<<count;
}

int main(){
  int n;
  cout<<"Enter number of elements in the array:\n ";
  cin>>n;
  int arr[100];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  duplicate(arr,n);
}