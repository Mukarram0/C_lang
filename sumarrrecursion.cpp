#include<iostream>
using namespace std;
int sumarray(int arr[],int i,int size,int sum)
{
    if(i>=size)
    {
        return sum;
    }
    else
    { 
    return sumarray(arr,i+1,size,sum+=arr[i]);
    }

}
int main()
{
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"enter array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    } 
    cout<<endl;
    cout<<"sum of all array elements are "<<sumarray(arr,0,size,0);
}