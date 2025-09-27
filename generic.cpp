#include<iostream>
using namespace std;
template <typename T>
void _swap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=2,b=3;
    cout<<a<<" - "<<b<<endl;
    _swap(a,b);
    cout<<a<<" - "<<b<<endl;
    string c="brother",d="hello";
    cout<<c<<" - "<<d<<endl;
    _swap(c,d);
    cout<<c<<" - "<<d<<endl;
}