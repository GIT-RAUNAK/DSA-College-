//Perform the union and intersection of two integer arrays. (In union, the common elements must come once)

#include<iostream>
using namespace std;

void printunion(int arr1[],int n1,int arr2[],int n2){
  int arr3[100];
  int k=0;
  for(int i=0;i<n1;i++){
    arr3[k]=arr1[i];
    k++;
  }
  for(int i=0;i<n2;i++){
    bool found=false;
    for(int j=0;j<k;j++){
      if(arr2[i]==arr3[j]){
        found=true;
        break;
      }
    }
    if(!found){
      arr3[k++]=arr2[i];
    }
  }

  cout << "Union: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main(){
  int n1,n2;
  cout<<"Enter size of both arrays respectively:\n";
  cin>>n1>>n2;
  int arr1[1000];
  int arr2[1000];

  cout<<"Enter elements in the first array:\n";
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  cout<<"Enter elements in the second array:\n";
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }

  printunion(arr1,n1,arr2,n2);
}