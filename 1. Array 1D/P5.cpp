//WAP to insert an element in an 1-D array.

#include<iostream>
using namespace std;

void insert(int arr[],int n,int index,int number){
  for(int i=n;i>index-1;i--){
      arr[i]=arr[i-1];
  }
  arr[index-1]=number;
  n++;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter number of elements in the array:\n";
  cin>>n;
  int arr[n];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int index,number;
  cout<<"Enter position and Number:\n";
  cin>>index>>number;

  insert(arr,n,index,number);
}