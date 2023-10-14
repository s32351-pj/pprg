#include <iostream>
using namespace std;
int main()
{
    cout << "podstawy programowania \n";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "podaj liczbę całkowitą: ";
    cin >> number;
    if (number <= 0) {
        cout<<"wpisałeś dodatnią liczbę";
    }

    // dokończyć
}

#include <iostream>
using namespace std;
int main()
{
    double bok, pole;

    cout << "program obliczający  ..." << endl;
    cout << "podaj dł. boku: ";
    cin >> bok;
    if (bok>0){
        pole = bok*bok;
        cout<< "pole kw. o  boku dł." << bok << "wyosi" << pole;
    }

}