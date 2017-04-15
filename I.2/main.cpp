#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    complex a,b,c,delta,s1,s2;
    cout<<"Coeficinetul lui x^2: ";
    a.citire();
    cout<<"Coeficientul lui x:";
    b.citire();
    cout<<"Termenul liber:";
    c.citire();
    if(a!=0 && b!=0 && c!=0)
    {
        delta=(b^2)-(4*a*c);
        s1=(-b+sqrt(delta))/(2*a);
        s2=(-b-sqrt(delta))/(2*a);
        s1.afisare();
        cout<<endl;
        s2.afisare();
    }
    if(a!=0 && b!=0 && c==0)
    {
        s1.setreal(0);s1.setimg(0);
        s2=-b/a;
        s1.afisare();
        cout<<endl;
        s2.afisare();
    }
    if(a!=0 && b==0 && c!=0)
    {
        s1=sqrt(-c/a);
        s2=-s1;
        s1.afisare();
        cout<<endl;
        s2.afisare();
    }
    if(a!=0 && b==0 && c==0)
    {
        s1.setreal(0);s1.setimg(0);
        s2=s1;
        s1.afisare();
        cout<<endl;
        s2.afisare();
    }
    if(a==0 && b!=0 && c!=0)
    {
        s1=-c/b;
        s1.afisare();
    }
    if(a==0 && b!=0 && c==0)
    {
        s1.setreal(0);
        s1.setimg(0);
        s1.afisare();
    }
    if(a==0 && b ==0 && c!=0)

        cout<<"Nu are solutii";

    if(a==0 && b==0 &&c ==0)
        cout<<"Orice numar e solutie";

    cout<<endl;
}
