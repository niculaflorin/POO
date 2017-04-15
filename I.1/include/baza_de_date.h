#ifndef BAZA_DE_DATE_H
#define BAZA_DE_DATE_H
#include "persoana.h"
#include <string>
#include <iostream>
#define DIM_MAX 100
using namespace std;
class baza_de_date
{
private:
        persoana *p[DIM_MAX];
        int nr;

public:
        baza_de_date();
        ~baza_de_date();
       int add(persoana *x);
       int get_nr();
       void del(string nume);
       void del(int nastere);
       void del(char s);

       void alfabetic();
       void crescator();

};


#endif // BAZA_DE_DATE_H
