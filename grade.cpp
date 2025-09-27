#include<iostream>
using namespace std;
int main(){
    int grade;
    float avg=0;
    for(int i=1;i<=3;i++){
        do{
            cout<<"enter value of the grade "<<i<<" :";
            cin>>grade;
        }
        while(grade<1||grade>5);
        avg+=grade;
    }
    cout<<"average= "<<avg/3;
    return 0;
}