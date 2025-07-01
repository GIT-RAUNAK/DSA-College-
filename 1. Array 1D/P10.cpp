//WAP to delete an element at desired position from an array.

#include<iostream>
using namespace std;

void deletion(int arr[],int n,int number){
  int index=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==number){ index=i;  break; }
  }
  for(int i=index;i<n-1;i++){
    arr[i]=arr[i+1];
  }
  if (index == -1) {
        cout << "Element not found.\n";
        return;
      }
  for(int i=0;i<n-1;i++){
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
  int number;
  cout<<"Enter Number to be deleted:\n";
  cin>>number;

  deletion(arr,n,number);
}