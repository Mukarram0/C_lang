#include<iostream>
using namespace std;
int bodymassIndex(float kg,float height){
   float bmi;
   bmi=kg/(height*height);
   if(bmi<18.5){
   cout<<bmi<<":"<<" you are underweight";
   return 0;
   }
   else
   {
   if(bmi>18.5&&bmi<+24.9)
   {
   cout<<bmi<<":"<<"you are normalweight";
   return 0;
   }
   else
   cout<<bmi<<":"<<"you are overweight";
   return 0;
   }
}
int main(){
    float weight;
    float height;
    cout<<"enter the body weight in kg(kilogram i.e: 1kg or 1.2kg): ";
    cin>>weight;
    cout<<"enter the height in m(metre i.e: 1m or 1.2m): ";
    cin>>height;
    bodymassIndex(weight,height);
}