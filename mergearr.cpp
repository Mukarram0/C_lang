#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int s,s1,cmp;
    cout<<" enter the size of the array of a and a1: ";
    cin>>s>>s1;
    int a[s],a1[s1];
    int size=s+s1;
    int srt[size];
    cout<<"enter the elements in the arrray a: ";
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"enter the elements in the arrray a1: ";
    for(int i=0;i<s1;i++){
        cin>>a1[i];
    }
    bubbleSort(a,s);
    bubbleSort(a1,s1);
    for(int i=0;i<s;i++){
        srt[i]=a[i];
    }
    int  temp=size;
    for(int i=0;i<s1;i++){
        srt[s+i]=a1[i];
    }
    bubbleSort(srt,size);
    cout<<"sorted array are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<srt[i]<<" ";
    }
    
}    