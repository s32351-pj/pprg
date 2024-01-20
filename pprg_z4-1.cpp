//znajdź największy element tablicy, liczby całkowite, wielkość tablicy jak i jej elementy pobierz od użytkownika.

#include <iostream>;
using namespace std;
int main()
{
    int array_size;
    int nite;

    tablica:
    cout << "podaj rozmiar tablicy: ";
    cin >> array_size;
    if (array_size <= 0) {
        cout << "wpisałeś liczbę ujemną.";
    }
    else if (array_size == 0) {
        cout << "błędny rozmiar tablicy. Podaj właściwy rozmiar, lub -666 jeżeli chcesz zakończyć."
            if array_size = -666 {
            }
            else goto tablica;
    }
    else cout << array_size;
