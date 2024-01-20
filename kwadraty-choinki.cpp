#include <iostream>;
using namespace std;
int main()
{
     int numA;
     int numB;

    cout << "podaj liczbę a: ";
    cin >> numA;
      if (numA <=0) {
         cout << "wpisałeś liczbę ujemną.";
    } else if (numA==0) {
       cout << "kwadrat o boku zero nie istnieje.";
    } else cout << numA;
    cout << "\n";
    cout << "podaj liczbę b: ";
    cin >> numB;
    if (numB<=0) {
         cout << "wpisałeś liczbę ujemną";
    } else if (numB==0) {
         cout << "kwadrat o boku zero nie istnieje.";
     } else cout << "\n"; cout << numB;
     cout << "\n";
     cout << "\n";

     for (int i = 1; i <=numA;i++) cout << "*"; 
     cout << "\n";
     cout << "\n";
      
      for (int i = 1; i <=numB;i++) cout << "*\n";
      cout << "\n";

for (int i = 1; i <=numB;i++) {
for (int j =1; j <=numA;j++) cout << "*";
cout << "\n";
}
cout << "\n";
for (int i = 1; i <=numB;i++) {
for (int j =1; j <=numA;j++) { 
     if (j>1 && j<=numA && i>1 && i<=numB) cout << ".";
     cout << "*";
}
cout << "\n";
}
cout << "\n";
for (int i = 1; i <=numA;i++) {
for (int j = 1; j <=i;j++) cout << "*";
cout << "\n";
}
 cout << "\n";
for (int i = 1; i <=numA;i++) {
for (int j = 0; j <=numA-i;j++) 
     cout << "*";
cout << "\n";

}
cout << "dziena!";
cout << "\n";
return 0;
}

