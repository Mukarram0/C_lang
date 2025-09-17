#include<iostream>
using namespace std;
int calculator(float num1,char operations,float num2){
int total;
    if(operations=='*'){
        total=num1*num2;
        cout<<num1<<operations<<num2<<" ="<<total;
    }
    else if(operations=='+'){
        total=num1+num2;
        cout<<num1<<operations<<num2<<" ="<<total;
    }
    else if(operations=='-'){
        total=num1-num2;
        cout<<num1<<operations<<num2<<" ="<<total;
    }
    else if(operations=='/'){
        total=num1/num2;
        cout<<num1<<operations<<num2<<" ="<<total;
    }
    else{
        cout<<"invalid operations or value of num1 and num2";
    }
    return 0;
}
int main(){
    float num1,num2;
    char operations;
    cout<<"enter the num1 and operations and then num2 "<<endl;
    cin>>num1>>operations>>num2;
    system("cls");
    calculator(num1,operations,num2);
    return 0;
}