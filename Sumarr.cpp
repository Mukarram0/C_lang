#include<iostream>
using namespace std;
int Sumarr(int n){
    int arr[n];
    int sum=0;
    cout<<"enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    }
    cout<<"sum of the "<<n<<" elements are "<<sum<<".";
    return 0;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    Sumarr(n);
    return 0;
}