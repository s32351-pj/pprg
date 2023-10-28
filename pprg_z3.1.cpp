#include <iostream>
using namespace std;
int main()
{
     float numX, numY;

    cout << "podaj liczbę X: ";
    cin >> numX;
    cout << "podaj liczbę Y: ";
    cin >> numY;
    cout << "podałeś liczbę X = " << numX << " oraz liczbę Y = " << numY << "\n";
    cout << "wyniki: \n" ;
    
    if (numX == 0) {
       cout << "druga liczba to 0, instrukcja wyik dzielenia w zależności o interpretacji nie istnieje lub jest nieskończonością. \n";
        } else cout << "iloraz liczb: " << printf("%.2f\n",numX/numY);
       cout << "suma liczb: " << printf("%.2f\n",numX+numY) ;
       cout << "różnica liczb: " << printf("%.2f\n",numX-numY);
       cout << "iloczyn liczb: " << printf("%.2f\n",numX*numY);
     
return 0;
}

