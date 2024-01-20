#include <iostream>
using namespace std;
int main()
{
     string imie;
     string nazwisko;
string imionaNazwiska[6];

for (int i =0;i<6;i++){
    if (i%2 != 0) {
    cout << "podaj imię: ";
    cin >>     imionaNazwiska[i];
    } if (i%2 == 0) {
    cout << "podaj nazwisko: ";
    cin >>     imionaNazwiska[i];
    }
}

cout << "\n";

cout << "Osoba pierwsza: " << imionaNazwiska[0] << " " << imionaNazwiska[1];
cout << "Osoba druga: " << imionaNazwiska[2] << " " << imionaNazwiska[3];
cout << "Osoba trzecia: " << imionaNazwiska[4] << " " << imionaNazwiska[5];

}