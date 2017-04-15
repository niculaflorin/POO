#include "persoana.h"



void persoana::set_nume(string name)
{
    nume=name;
}
string persoana::get_nume()
{
   return nume;
}

void persoana::set_an(int nastere)
{
    an=nastere;
}
int persoana::get_an()
{
    return an;
}

void persoana::set_sex(char s)
{
    sex=s;
}
char persoana::get_sex()
{
    return sex;
}
