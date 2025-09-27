#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<" enter the size of of matrix A( rows*column ): ";
    cin>>r1>>c1;
    cout<<" enter the size of of matrix B( rows*column ): ";
    cin>>r2>>c2;
    if (c1!=r2){
        cout<<" Multiplication of the matrix is not possible.";
        return 0;
    }
    int A[r1][c1],B[r2][c2],mul[r1][c2];
    cout<<"enter the elements of matrix A: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"enter the elements of matrix B: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        } 
    }
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            mul[i][j] = 0;
        }
    }
    cout<<"MUltiplication  of matrix A and matrix B is "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        { 
            for(int k=0;k<r2;k++){
                mul[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}