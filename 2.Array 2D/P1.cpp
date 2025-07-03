//Add two matrices.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> sumation(vector<vector<int>> mat1,vector<vector<int>> mat2){
  int row=mat1.size();
  int col=mat1[0].size();

  vector<vector<int>> mat3(row,vector<int> (col));

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  }

  return mat3;
}

int main(){
  int row,col;
  cout<<"Enter size of the matrix:\n";
  cin>>row>>col;
  vector<vector<int>> mat1(row,vector<int>(col));
  vector<vector<int>> mat2(row,vector<int>(col));
  cout<<"Enter element in First Matrix:\n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>mat1[i][j];
    }
  }
  cout<<"Enter element in Second Matrix:\n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>mat2[i][j];
    }
  }

  vector<vector<int>> result=sumation(mat1,mat2);

  for(int i=0;i<result.size();i++){
    for(int j=0;j<result[0].size();j++){
      cout<<result[i][j]<<"\t";
    }
    cout<<"\n";
  }
  return 0;
}