//WAP to find out the multiplication of the numbers stored in an array of integers.

#include<iostream>
using namespace std;

void product(int arr[],int n){
  int product=1;
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
    product*=arr[i];
  }
  cout<<"Product of the elements in the array is: "<<product;
}

int main(){
  int n;
  cout<<"Enter size of the array:\n";
  cin>>n;
  int arr[n];

  product(arr,n);
}