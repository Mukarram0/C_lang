#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,m;//size need to be same for matrice addition
    cout<<"enter the size of the array: ";
    cin>>n>>m;
    int A[n][m],B[n][m],sum[n][m];
    if(n!=m){
        cout<<"addition of matrices is not possible.";
        return 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Matrices of A are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<setw(5)<<A[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
    }
    cout<<"Matrices of B are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<setw(5)<<B[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    //addition
    cout<<"addition of matrices are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          sum[i][j]=A[i][j]+B[i][j];
          cout<<setw(5)<<sum[i][j];
        }
        cout<< endl;
    }
   

}