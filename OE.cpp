#include<iostream>
using namespace std;
void odd_even(){
    int num;
    cout<<"enter the number:";
    cin >> num;
    (num%2==0?cout<<num<<" : is even":cout<<num<<" : is odd"); //ternary operator
}
int main(){
    odd_even();
    return 0;
}