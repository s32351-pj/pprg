#include <iostream>
using namespace std;
int main()
{
     int numA;
     int numB
     ;

    cout << "podaj liczbę a: ";
    cin >> numA;
      if (numA <=0) {
         cout << "wpisałeś liczbę ujemną.";
    } else if (numA>=0) {
       cout << "kwadrat o boku zero nie istnieje.";
    } else cout << numA

    cout << "podaj liczbę b: ";
    cin >> numB;
    if (numB<=0) {
         cout << "wpisałeś liczbę ujemną";
    } else if (numB=0) {
         cout << "kwadrat o boku zero nie istnieje.";
     } else cout << numB

     for (int i = 0; i <=numA;i++) cout "*"
      for (int i = 0; i <=numB;i++) cout "*\n"

for (int i = 0; i <=numB;i++) {
for (int j = 0; j <=numA;j++) cout << "*"
"\n"
}
"\n"
for (int i = 0; i <=numB;i++) {
for (int j = 0; j <=numA;j++) { 
     if (j>0 && j<numA && i>0 && i<numB) continue;
     cout << "*"
}
"\n"
}
"\n"
for (int i = 0; i <=numA;i++) {
for (int j = 0; j <=i;j++) cout << "*"
"\n"
}
"\n"
for (int i = 0; i <=numA;i++) {
for (int j = 0; j <=numA-i;j++) 
     cout << "*"
"\n"
"\n"
}
cout << "dziena!"
}