#include <iostream>
using namespace std;

int main()
{
int liczba;
int rezultat;

   cout << "podaj liczbe: ";
   cin >> liczba;
   cout << "silnia " << liczba << " wynosi " << oblicz(liczba) << "\n";
 
 cout << "wynik jest podzielny przez: ";

 podzielnosc(rezultat);
}

int oblicz(int liczba) {
    if (liczba>1) return liczba*oblicz(liczba-1);
    else return 1;
}

void podzielnosc(int rezultat)  //tu można zrobić switch, ale to ewentulanie jak zrobię 7.3 :) .
{
    if (rezultat % 2 == 0)
        cout << "2";
    if (rezultat % 3 == 0)
        cout << "3";
    if (rezultat % 5 == 0)
        cout << "5";
    if (rezultat % 11 == 0)
        cout << "11";
}
