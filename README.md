# POO
programare orientat obiect

I.1. Definiti clasa "persoana", avand:
    - membri privati pentru nume (string), anul nasterii (intreg), sex
       (caracter);
    - sase metode publice pentru setarea/furnizarea informatiilor din cei
       trei membri privati.
   Definiti clasa "baza_de_date" avand
    - ca membri privati un vector de pointeri la "persoana" si un intreg
       reprezentand numarul persoanelor;
    - ca metode publice un constructor care initializeaza vectorul cu NULL
       pe fiecare componenta, un destructor care dezaloca toate "persoanele"
       pointate de componentele vectorului, o metoda pentru adaugat o
       "persoana", trei metode pentru eliminat persoanele avand un anumit
       nume, respectiv an al nasterii, respectiv sex (cele trei metode vor
       avea acelasi nume, prin supraincarcare), doua metode pentru afisat
       persoanele continute in baza de date in ordinea alfabetica a numelor,
       respectiv crescatoare a varstelor.
   Cele doua clase de mai sus pot avea si alti membri/metode, dar se va
  respecta principiul incapsularii datelor (orice setare/furnizare a
  informatiilor continute in membrii privati se va face doar prin intermediul
  unor metode). Pentru cele doua clase se va scrie cate un fisier header si un
  fisier de implementare.
   Scrieti un program care sa gestioneze o baza de date folosind clasele de
  mai sus. El va afisa un meniu (in mod text), care va oferi functii de
  adaugat o persoana, eliminat persoanele dupa nume, varsta, sex, afisat
  persoanele in ordine alfabetica sau dupa varsta. Programul va fi construit
  ca un "project" continand si fisierele de implementare ale celor doua clase.

I.2 Clasa pentru numar complex, avand:
    - membrii privati pentru partea reala si partea imaginara (double);
    - constructori pentru initializare si copiere;
    - metode publice pentru setat/furnizat partea reala si partea imaginara;
    - metoda publica pentru citire;
    - metoda publica de afisare (sub forma "a", "i*a", "-i*a", "a+i*b",
       "a-i*b", dupa caz);
    - operatori friend: + (adunare), +(numarul insusi), - (scadere),
       - (opus), * (inmultire), / (impartire), +=, -=, *=, /= (cu efectul
       cunoscut), ^ (ridicare la putere naturala), == (test de egalitate),
       != (test de neegalitate); operatorii binari +, -, *, /, ==, != se
       scriu in cate trei variante, pentru a putea lucra cu operanzi
       complex-complex, double-complex, complex-double; operatorii +=, -=,
       *=, /= se scriu in doua variante, pentru a putea lucra cu operanzi
       complex-complex, complex-double.
    - functii friend: "abs" (furnizeaza modulul), "sqrt" (furnizeaza radicalul
       de ordinul doi).
   Program de rezolvare a ecuatiei de ordinul doi cu coeficienti complecsi.
   Pentru clasa "complex" se va scrie un fisier header si un fisier de
  implementare. Programul se va scrie ca un project.
