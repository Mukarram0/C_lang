#include<iostream>
using namespace std;
int larr(){
    int length;
    int arr[]={1,2,3,4,5,0,};
    length=sizeof(arr)/sizeof(arr[0]);//sizeof(arr) gives total bytes 
    cout<<"length of the array is: "<<length;
    return 0;

}
int main(){
    larr();
    return 0;
}