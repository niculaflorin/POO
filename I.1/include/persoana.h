#ifndef PERSOANA_H
#define PERSOANA_H
#include <string>
using namespace std;

class persoana
{
private:
    string nume;
    int an;
    char sex;
public:
    void set_nume(string name);
    string get_nume();
    void set_an(int nastere);
    int get_an();
    void set_sex(char s);
    char get_sex();
};



#endif // PERSOANA_H
