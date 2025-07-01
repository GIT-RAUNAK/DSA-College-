//WAP to search an element in an 1-D array.

#include<iostream>
using namespace std;

int search(int arr[],int n,int num){
  int index=0;
  for(int i=0;i<n;i++){
    if(arr[i]==num) index=i+1;
  }
  if(index==0) cout<<"Number not found.\n";
  else cout<<"Number is found at position "<<index;
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
  int num;
  cout<<"Enter target element:\n";
  cin>>num;
  search(arr,n,num);
}