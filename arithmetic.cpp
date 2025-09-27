#include<iostream>
using namespace std;
int main(){
    int a, b, c,d,e,f,g;
    double res;
    cout<<"enter the value of each variable:\n";
    cin>>a>>b>>c>>d>>e>>f>>g;
    res=(a + b / c * d - e)*(f-g);
    cout<<"result of the expression is: "<<res;
}