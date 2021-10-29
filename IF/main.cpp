#include <iostream>
#include <string>
using namespace std;


   int main(int argc, char *argv[])

   {
       string Spieler1, Spieler2;
       cout << endl;
       cin >> Spieler1;
       cout << endl;
       cin >> Spieler2;
       cout << endl;
       if(Spieler1 == Spieler2)
           cout << "Name schon verwendet\n" << endl;
       else
           cout << "Los gehts\n";

   }




