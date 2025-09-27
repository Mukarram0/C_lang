#include<iostream>
using namespace std;
int main(){
    int n=100;
    cout<<"number divisble by 3 and 5 : "<<endl;
    while(n<=500){
        if(n%3==0 && n%5==0)
        {
            cout<<n<<" ";
        }
        ++n;
    }
    
}