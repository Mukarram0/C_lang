#include<iostream>
using namespace std;
#include<cmath>
void quadratic(){
    /*   D = b^2-4ac  (help in finding roots) 
    x = -b+-sqrt(D)/2*a
    */
    double a,b,c,D;
    cout<<" enter the coffecients of a,b,c:"<<endl;
    cin>>a>>b>>c;
    D = b*b-4*a*c;
    if(D>0){
        double root1 = (-b+sqrt(D))/(2*a);
        double root2 = (-b-sqrt(D))/(2*a);
        cout<<root1<<" , "<<root2<<" is roots of quadratic equation. "<<endl;
    }
    if(D==0){
        double root = -b / (2 * a);
        cout<<root<<" is the roots quadratic equation"<<endl;
    }
    if(D<0){
        double real = -b/(2*a);
        double img = sqrt(-D)/(2*a);//imaginary 2i etc.
        cout<<real<<" + "<<img<<"i and "<<real<<" - "<<img<<"i"<<endl;
    }

}
int main(){
    quadratic();
    return 0;
}