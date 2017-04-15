#include "baza_de_date.h"
#include "persoana.h"
#include <string>
#include <iostream>
#include <cstring>

baza_de_date::baza_de_date()
{ for(int i=0;i<DIM_MAX;i++)
   {
     p[i]=NULL;
}
nr=0;
}


baza_de_date::~baza_de_date()
{
    while(nr>0)
     {delete []p;}
}
int baza_de_date::get_nr()
{
    return nr;
}

int baza_de_date::add(persoana *x)
{
    if(nr==DIM_MAX)
    {
        return 0;
    }
   else
   {
    p[nr]=x;
    nr++;
    return 1;
   }
}

void baza_de_date::del(string nume)
{
    for(int i=0;i<nr;i++)
        if(p[i]->get_nume()==nume)
    {
        delete p[i];
        nr--;
        p[i]=p[nr];
        p[nr]=NULL;
        i--;
    }
}

void baza_de_date::del(int nastere)
{
    for(int i=0;i<nr;i++)
        if(p[i]->get_an()==nastere)
        {
            delete p[i];
            nr--;
            p[i]=p[nr];
            p[nr]=NULL;
            i--;
        }
}

void baza_de_date::del(char s)
{
    for(int i=0;i<nr;i++)
     if(p[i]->get_sex()==s)
     {
         delete p[i];
         nr--;
         p[i]=p[nr];
         p[nr]=NULL;
         i--;
     }
}


void baza_de_date::alfabetic()
{
    int i,j;
    persoana *aux;

    for(i=0;i<nr;i++)
    {

        for(j=i+1;j<nr;j++)
            if(p[i]->get_nume().compare(p[i]->get_nume())>0)
            {
                p[i]=aux;
                p[i]=p[j];
                p[j]=aux;

            }
}

   for(i=0;i<nr;i++)
   {
       cout<<p[i]->get_nume()<<" ";
       cout<<p[i]->get_an()<<" ";
       cout<<p[i]->get_sex()<<" "<<'\n';
   }
}

void baza_de_date::crescator()
{
    int i,j;
    persoana *aux;

    for(i=0;i<nr;i++)
    {
        for(j=i+1;j<nr;j++)
            if(p[i]->get_an()>p[j]->get_an())
        {
            p[i]=aux;
            p[j]=p[i];
            p[j]=aux;
        }
    }

    for(i=0;i<nr;i++)
    {
        cout<<p[i]->get_nume()<<" ";
        cout<<p[i]->get_an()<<" ";
        cout<<p[i]->get_sex()<<" "<<'\n';
    }
}
