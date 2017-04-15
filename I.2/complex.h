#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <math.h>

using namespace std;

class complex
{
private:
	double real,img;
public:

	complex();
	complex(const complex &z);

	void setreal(double x);
	void setimg(double y);

	double getreal();
	double getimg();

	void citire();
	void afisare();

	friend complex operator+(complex a,complex b);
	friend complex operator+(double a,complex b);
	friend complex operator+(complex a,double b);
	friend complex operator+(complex a);

	friend complex operator-(complex a,complex b);
	friend complex operator-(double a,complex b);
	friend complex operator-(complex a,double b);
	friend complex operator-(complex a);

	friend complex operator*(complex a,complex b);
	friend complex operator*(double a,complex b);
	friend complex operator*(complex a,double b);

	friend complex operator/(complex a,complex b);
	friend complex operator/(double a,complex b);
	friend complex operator/(complex a,double b);

	friend complex& operator+=(complex& a,complex b);
	friend complex& operator+=(complex& a,double b);

	friend complex& operator-=(complex& a,complex b);
	friend complex& operator-=(complex& a,double b);

	friend complex& operator*=(complex& a, complex b);
	friend complex& operator*=(complex& a,double b);

	friend complex& operator/=(complex& a,complex b);
	friend complex& operator/=(complex& a,double b);

	friend complex operator^(complex a,unsigned long n);

	friend bool operator==(complex a,complex b);
	friend bool operator==(double a,complex b);
	friend bool operator==(complex a,double b);

	friend bool operator!=(complex a,complex b);
	friend bool operator!=(double a,complex b);
	friend bool operator!=(complex a,double b);

	friend double abs(complex a);
	friend complex sqrt(complex a);


};
#endif // COMPLEX_H
