//Merge two sorted arrays into a third array. The output array must be sorted.

#include<iostream>
using namespace std;

void sorting(int arr1[],int n1,int arr2[],int n2){
  int arr3[n1+n2];
  for(int i=0;i<n1;i++){
    arr3[i]=arr1[i];
  }
  int index=0;
  for(int i=n1;i<n1+n2;i++){
    arr3[i]=arr2[index];
    index++;
  }
  for(int i=0;i<(n1+n2)-1;i++){
    int index=i;
    for(int j=i+1;j<n1+n2;j++){
      if(arr3[j]<arr3[index]){
        index=j;
      }
    }
    int temp=arr3[i];
    arr3[i]=arr3[index];
    arr3[index]=temp;
  }
  cout<<"Sorted Array is:\n";
  for(int i=0;i<n1+n2;i++){
    cout<<arr3[i]<<" ";
  }
}

int main(){
  int n1,n2;
  cout<<"Enter size of both arrays respectively:\n";
  cin>>n1>>n2;
  int arr1[1000];
  int arr2[1000];

  cout<<"Enter sorted elements in the first array:\n";
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  cout<<"Enter sorted elements in the second array:\n";
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }

  sorting(arr1,n1,arr2,n2);
}