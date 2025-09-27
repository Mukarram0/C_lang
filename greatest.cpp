#include<iostream>
using namespace std;
class greatest{
public:
  int a;
  int b;
  bool valid;

  greatest(int *num1,int *num2){
    if(*num1!=0&&*num2!=0&&*num1!=*num2){
       a=*num1;
       b=*num2;
       valid=true;
    }
    else{
        valid=false;
    }
  }
  void compare(){
    if(valid){
        if(this->a>this->b){
        cout<<this->a<<" is greater than "<<this->b;
       }
       else 
       {
        cout<<this->b<<" is greater than "<<this->a;
       }
    }
    else
    {
        cout<<"invalid comparison. ";
    }
    
  }

};
int main(){
    int a,b;
    cout<<"enter value of a and b is  ";
    cin>>a>>b;
    greatest g1(&a,&b);
    g1.compare();
}