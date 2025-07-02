//Convert a decimal number to binary number using array

#include<iostream>
using namespace std;

void decimalTobinary(int n){
  if(n==0){
    cout<<"Binary: 0";
    return;
  }

  int binary[32];
  int index=0;
  while(n!=0){
    binary[index]=n%2;
    n/=2;
    index++;
  }
  cout<<"Binary of the given decimal number is:\n";
  for(int i=index-1;i>=0;i--){
    cout<<binary[i];
  }
}

int main(){
  int n;
  cout<<"Enter a number:\n";
  cin>>n;

  decimalTobinary(n);
}