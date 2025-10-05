#include<iostream>
using namespace std;
void swapvalue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping using value( inside function ):"<<" a= "<<a<<": b="<<b<<endl;
}
void swapreference(int& a,int& b)
{
  int temp;
    temp=a;
    a=b;
    b=temp;
    //cout<<"after swapping values: "<<a,b;
}
int main()
{
    int a,b,choice;
    cout<<"enter the two number : ";
    cin>>a>>b; 
    cout<<"enter the choice of what you want to perform: "<<endl<<
    "choice:"<<endl<<
    "1. Swapping values using swapvalue function"<<endl<<
    "2.  Swapping values using swapreference function"<<endl<<"choice = ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            swapvalue(a,b);
            cout<<"original value remain unchanged :"<<" a= "<<a<<": b="<<b<<endl;
            break;
        }
        case 2:
        {
            swapreference(a,b);
            cout<<"after swapping using reference( original value gets changed ):"<<" a= "<<a<<": b="<<b;
            break;
        }
        deafault:
        {
            cout<<"invalid choice ";
            break;
        }
    }

}