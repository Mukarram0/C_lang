#include<iostream>
using namespace std;
int max_elements(int arr[],int size)
{
    if(size==1)
    {
        return arr[0];
    }
    else
    {
        int max_e=max_elements(arr,size-1);
        return arr[size-1]>max_e?arr[size-1]:max_e;

    }

}
int min_elements(int arr[],int size)
{
    if(size==1)
    {
        return arr[0];
    }
    else
    {
        int min_e=min_elements(arr,size-1);
        return arr[size-1]<min_e?arr[size-1]:min_e;
    }

}
int main()
{
    int s;
    cout<<"enter the size of the array : ";
    cin>>s;
    cout<<"enter the array elements: ";
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"maximum: "<<max_elements(arr,s)<<endl;
    cout<<"minimum: "<<min_elements(arr,s);

}