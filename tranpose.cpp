#include<iostream>
using namespace std;
void tranpose(int r ,int c,int arr[10][10])
{
    cout<<"Tranpose matrix: "<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int a,b,arr[10][10];
    cout<<"enter the size of the matrix: ";
    cin>>a>>b;
    arr[a][b];
    cout<<"enter the elements of matrix("<<a<<"*"<<b<<")"<<" : "<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    tranpose(a,b,arr);
}