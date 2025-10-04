#include<iostream>
using namespace std;
void divisor(int a,int b)
{ int min_num,gcd;
    min_num=(a<b)?a:b;
    for(int i=1;i<=min_num;i++)
    {
        if(a%i==0&&b%i==0)
        {
          gcd=i; 
        }
    }
    cout<<"greatest common divisor of "<<a<<" and "<<b<<" is "<<gcd<<endl;
}
int recursion(int a,int b)
{   if(b==0)
    {
        return a;
    }
    return recursion(b,a%b);
}
int main()
{
    int num1,num2;
    cout<<"enter two number to find greatest divisor: ";
    cin>>num1>>num2;
    divisor(num1,num2);
    cout<<"greatest common divisor of "<<num1<<" and "<<num2<<" is "<<recursion(num1,num2);
}