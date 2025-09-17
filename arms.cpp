#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,c=0,sum=0;
    cout<<" enter a number: ";
    cin>>n;
    if (n<0){
        cout<<"armstrong is defined only for positive numbers in mathematics.";
        return 0;
    }
    int temp=n;
    while(temp!=0){
        temp=temp/10;
        c++;
    }
    cout<<"entered digit is a "<<c<<" digit number. "<<endl;
    temp=n;
    while(temp!=0){
        int digit=temp%10;
        sum=sum+round(pow(digit,c));
        temp=temp/10;
    }
    if(sum==n){
        cout<<sum<<" is an armstrong number."<<endl;
    }
    else{
        cout<<sum<<" is not an armstrong number.";
    }
    return 0;

}