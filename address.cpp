#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value of a: ";
    cin>>a;
    int *p=&a;
    cout<<"adrres of a varibale is "<<&a<<endl;
    cout<<"adrres of a varibale is "<<p;
    return 0;
}