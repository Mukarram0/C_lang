#include<iostream>
using namespace std;
int factorial(int n){
if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers");
    }
    if(n==0||n==1)
{
    return n;
}
return n*factorial(n-1);

}
int main(){
    int num;
    cout<<"enter the number to find factorial: ";
    cin>>num;
    cout<<endl;
    cout<<"Factorial of "<<num<<" is "<<factorial(num);

}