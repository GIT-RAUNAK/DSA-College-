/*Let there be an array of n distinct elements, write a program to find all the elements in the array which have at-least two smaller elements than themselves. For example: Input: a[5] = {20, 80, 70, 10, 50};
Output: 80, 70, 50*/

#include<iostream>
using namespace std;

void array(int arr[],int n){
  int arr1[100];
  int index=0;
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(arr[i]>arr[j])
      count++;
    }
    if(count>1){
      arr1[index]=arr[i];
      index++;
    }
  }
  cout<<"OUTPUT:\n";
  for(int i=0;i<index;i++){
    cout<<arr1[i]<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[100];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  array(arr,n);
}