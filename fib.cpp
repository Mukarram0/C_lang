#include<iostream>
using namespace std;
int main(){
    int a=0,b=1, n;
    cout<<"enter the value of n : ";
    cin>>n;
    if(n<1){
        cout<<"fibonacci sequence of "<<n<<" term is not possible. ";
    }
    else if(n==1){
         cout<<"fibonacci sequence of "<<n<<" term is  ";
        cout<<a<<" ";
    }
    else if(n==2){
        cout<<"fibonacci sequence of "<<n<<" term is  ";
        cout<<a<<" "<<b;
    }
    else{
        cout<<"fibonacci sequence of "<<n<<" term is  ";
        cout<<a<<" "<<b<<" ";
        for(int i=0;i<n-2;i++){
            int sum=a+b;
            a=b;
            b=sum;
            cout<<sum<<" ";

        }
    }

    return 0;


}