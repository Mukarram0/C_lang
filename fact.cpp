#include<iostream>
using namespace std;
int main(){
    int n;
    long long fact=1;
    cout<<"enter the value of n: ";
    cin>>n;
    if(n<0){
        cout<<"factorial of negative number is not define.";
        return 0;
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
    }
    cout<<"factorial of "<<n<<" is "<< fact;
    return 0;

}