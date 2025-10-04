#include<iostream>
using namespace std;
void factorial(int num)
{ int i=1,fact=1;
    if(num<0)
    { 
      cout<<"factorial not possible for this number." ;
      return;
    }
    while(i<=num)
    {
        fact*=i;
        i++;
    }
    cout<<"factorial of "<<num<<" is "<<fact<<endl;

}
int recursion(int n)
{ int i=1,fat=1;
  if(n<0)
  {
   cout<<"factorial not possible for this number." ;
   return 0;
  }
  if(n==0||n==1)
  {
    return 1;
  }
  else
  {
    return n*recursion(n-1);
  }
   
}
int main()
{
    int num;
    cout<<"enter the number to find factorial : ";
    cin>>num;
    factorial(num);
    cout<<"factorial of "<<num<<" is "<<recursion(num);
}