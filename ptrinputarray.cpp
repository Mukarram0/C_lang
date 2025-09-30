#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the size of array : ";
    cin>>n;
    int arr[n];
    int *ptr=arr;
    cout<<"enter "<<n<<" elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"array elements are :";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";
    }
    

}