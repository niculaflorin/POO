#include "complex.h"
#include <iostream>
#include <math.h>

using namespace std;

complex::complex()
{
	real=0;
	img=0;
}

complex::complex(const complex &z)
{
	real=z.real;
	img=z.img;
}

void complex::setreal(double x)
{
	real=x;
}

void complex::setimg(double y)
{
	img=y;
}

double complex::getreal()
{
	return real;
}

double complex::getimg()
{
	return img;
}

void complex::citire()
{
	cin>>real;
	cin>>img;

}

void complex::afisare()
{
    if(real==0)
    {
        if(img==0)cout<<0;
        if((img<0 && img!=-1)||(img>0 && img!=1))cout<<img<<"*i";
        if(img==-1)cout<<"-i";
        if(img==1)cout<<"i";
    }
    else
    {
        if(img==0)cout<<real;
        if(img<0 && img!=-1)cout<<real<<img<<"*i";
        if(img==-1)cout<<real<<"-i";
        if(img>0 && img!=1)cout<<real<<"+"<<img<<"*i";
        if(img==1)cout<<real<<"+"<<"i";
    }

}

complex operator+(complex a,complex b)
{
	complex c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	return c;
}

complex operator+(double a,complex b)
{
	complex c;
	c.real=a+b.real;
	c.img=b.img;
	return c;
}

complex operator+(complex a,double b)
{
	complex c;
	c.real=a.real+b;
	c.img=a.img;
	return c;
}

complex operator+(complex a)
{
	return a;
}

complex operator-(complex a,complex b)
{
	complex c;
	c.real=a.real-b.real;
	c.img=a.img-b.img;
	return c;
}

complex operator-(double a,complex b)
{
	complex c;
	c.real=a-b.real;
	c.img=-b.img;
	return c;
}

complex operator-(complex a,double b)
{
	complex c;
	c.real=a.real-b;
	c.img=a.img;
	return c;
}

complex operator-(complex a)
{
	complex c;
	c.real=-a.real;
	c.img=(-1)*a.img;
	return c;
}

complex operator*(complex a,complex b)
{
	complex c;
    c.real=a.real*b.real-b.img*a.img;
    c.img=a.img*b.real+a.real*b.img;
    return c;
}

complex operator*(double a,complex b)
{
	complex c;
	c.real=a*b.real;
	c.img=a*b.img;
	return c;
}

complex operator*(complex a,double b)
{
	complex c;
	c.real=a.real*b;
	c.img=a.img*b;
	return c;
}

complex operator/(complex a,complex b)
{
	complex c;
if(b.real==0&&b.img==0)
    {
    c.real=0;
    c.img=0;
    }
    else
    {
	double q=b.real*b.real + b.img*b.img;
    c.real=(a.real*b.real+a.img*b.img)/q;
	c.img=(a.img*b.real-a.real*b.img)/q;
    }
	return c;
}

complex operator/(double a, complex b )
{
    complex c;
if(b.real==0&&b.img==0)
    {
    c.real=0;
    c.img=0;
    }
    else
    {
    double q=b.real*b.real + b.img*b.img;
    c.img=(-1)*(a*b.img)/q;
    c.real=(a*b.real)/q;
    }
    return c;
}

complex operator/(complex a, double b)
{
    complex c;
if(b==0)
    {
    c.real=0;
    c.img=0;
    }
    else
    {
        c.real=a.real/b;
        c.img=a.img/b;
        return c;
    }

}

complex& operator+=(complex& a, complex b)
{
    a.real=a.real+b.real;
    a.img=a.img+b.img;
    return a;
}

complex& operator+=(complex& a,double b)
{
    a.real=a.real+b;
    return a;
}

complex& operator-=(complex& a,complex b)
{
    a.real=a.real-b.real;
    a.img=a.img-b.img;
    return a;
}

complex& operator-=(complex& a, double b)
{
    a.real=a.real-b;
    return a;
}

complex& operator*=(complex& a, complex b)
{
    complex c=a;
    a.real=a.real*b.real-a.img*b.img;
    a.img=c.real*b.img+a.img*b.real;
    return a;
}

complex& operator*=(complex& a,double b)
{
    a.real=a.real*b;
    a.img=a.img*b;
    return a;
}

complex& operator/=(complex& a,complex b)
{
if(b.real==0&&b.img==0)
    {
    a.real=0;
    a.img=0;
    }
else{
    double q=b.real*b.real+b.img*b.img;
    a.real=(a.real*b.real+a.img*b.img)/q;
    a.img=(a.img*b.real-a.real*b.img)/q;
}
    return a;
}

complex& operator/=(complex& a,double b)
{
if(b==0)
   {
      a.real=0;
      a.img=0;
   }
else{
    a.real=a.real/b;
    a.img=a.img/b;
}
    return a;
}

complex operator^(complex a,unsigned long n)
{
    complex c=a;
    if(n==0)
    {
        c.real=1;
        c.img=0;
    }
    else
    {
        n--;
        while(n)
        {
            c=c*a;
            n--;
        }
    }
    return c;
}

bool operator==(complex a,complex b)
{
    bool test=false;
    if((a.real==b.real) && (a.img==b.img))
       test=true;
    return test;
}

bool operator==(double a,complex b)
{
    bool test=false;
    if((a==b.real) && (b.img==0))
        test=true;
    return test;
}

bool operator==(complex a,double b)
{
    bool test=false;
    if((a.real==b) && (a.img==0))
        test=true;
    return test;
}

bool operator!=(complex a,complex b)
{
    bool test=true;
    if((a.real==b.real) && (a.img==b.img))
        test=false;
    return test;
}

bool operator!=(double a,complex b)
{
    bool test=true;
    if((a=b.real)&&(b.img==0))
        test=false;
    return test;
}

bool operator!=(complex a,double b)
{
    bool test=true;
    if((a.real==b)&&(a.img==0))
        test=false;
    return test;
}

double abs(complex a)
{
    double c;
    c=sqrt(a.real*a.real+a.img*a.img);
    return c;
}

complex sqrt(complex a)
{
    complex c;
    if(a.real==0&&a.img==0)
    {
        c.real=0;
        c.img=0;
    }

    if(a.real>0&&a.img==0)
    {
        c.real=sqrt(a.real);
        c.img=0;
    }
    if(a.real<0&&a.img==0)
    {
        c.real=0;
        c.img=sqrt(-a.real);
    }

    if(a.img!=0)
    {
        c.real=(1/sqrt(2)*sqrt(sqrt(a.real*a.real+a.img*a.img)+a.real));

        if(a.img>=0)
                c.img=(1/sqrt(2))*sqrt(sqrt(a.real*a.real+a.img*a.img)-a.real);
        if(a.img<0)
                c.img=((-1)/sqrt(2))*sqrt(sqrt(a.real*a.real+a.img*a.img)-a.real);


    }
    return c;
}
