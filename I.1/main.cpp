#include <iostream>
#include "persoana.h"
#include "baza_de_date.h"
#include <string>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{ string nam;
 int nas;
 char s;

baza_de_date b;

 char litera;
    do{
      cout<<"A Adauga persoana noua"<<endl;
      cout<<"D Stergere"<<endl;
      cout<<"C Afisare in ordine alfabetica"<<endl;
      cout<<"F Afisare in ordine cronologica"<<endl;
      cout<<"E Iesire"<<endl;
      cout<<"ALEGE: "<<endl;
      cin>>litera;
       litera=toupper(litera);

      if(litera=='A')
      {
     persoana *per=new persoana;
       cout<<"Numele:";
       cin.ignore(80,'\n');
       getline(cin,nam);
       cout<<endl;

        cout<<"Anul nasterii: ";
        cin>>nas;
        cout<<endl;


        cout<<"Sexul: ";
        cin>>s;
        cout<<endl<<endl;

        per->set_nume(nam);
        per->set_an(nas);
        per->set_sex(s);

        if(b.add(per))
        {
          cout<<"Persoana a fost adaugata"<<endl;
          Sleep(800);

        }
        else
           {
               cout<<"Memoria este plina"<<endl;
            }


      }

        if(litera=='D')
     {
         persoana *per=new persoana;

         cout<<"Nume: ";
         cin.ignore(80,'\n');
         getline(cin,nam);
         b.del(nam);

         cout<<"Anul nasterii: ";
         cin>>nas;
         b.del(nas);

         cout<<"Sex: ";
         cin>>s;
         b.del(s);
     }

        if(litera=='C')
        {


            b.alfabetic();
            Sleep(2000);
        }


        if(litera=='F')
        {

            b.crescator();
            Sleep(2000);
        }
        system("cls");

       } while(litera!='E' );


    return 0;
}
