//Multiply two matrices.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> multiplication(vector<vector<int>> mat1,vector<vector<int>> mat2){
  int row1=mat1.size();
  int col1=mat1[0].size();
  int row2=mat2.size();
  int col2=mat2[0].size();

  vector<vector<int>> mat3(row1,vector<int> (col2,0));

  for(int i = 0; i < row1; i++) {
    for(int j = 0; j < col2; j++) {
      for(int k = 0; k < col1; k++) {
         mat3[i][j] += mat1[i][k] * mat2[k][j];
       }
      }
    }

    return mat3;
  
}

int main(){
  int row1,col1;
  cout<<"Enter the Rows and Columns in the matrix respectively for Matrix 1:\n";
  cin>>row1>>col1;
  int row2,col2;
  cout<<"Enter the Rows and Columns in the matrix respectively for Matrix 2:\n";
  cin>>row2>>col2;

  if(col1!=row2){
    cout<<"Make sure that Columns of first Matrix must be same in number to rows of second Matrix:\n";
    return 0;
  }

  vector<vector<int>> mat1(row1,vector<int> (col1));
  vector<vector<int>> mat2(row2,vector<int> (col2));

  cout<<"Enter element in First Matrix:\n";
  for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
      cin>>mat1[i][j];
    }
  }
  cout<<"Enter element in Second Matrix:\n";
  for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
      cin>>mat2[i][j];
    }
  }

  vector<vector<int>> result=multiplication(mat1,mat2);

  for(int i=0;i<result.size();i++){
    for(int j=0;j<result[0].size();j++){
      cout<<result[i][j]<<"\t";
    }
    cout<<"\n";
  }
  return 0;
}