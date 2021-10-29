#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

   //Preise

    double preis;
   preis = 0.05;

   double preisSchueler;
   preisSchueler = 0.05;

   double Lehrerpreis;
   Lehrerpreis = 0.025;

   //Variablen

   int Schueler;
   int Kilometer;
   int Lehrer;

   //double Variablen

   double Ergebnis1;
   double Ergebnis2;
   double Ergebnis3;


   //Schuelerabfrage

   cout << "Schueler angeben" << endl;
   cin >> Schueler;
   cout << endl;
   cout << Schueler << " Eingabe Gespeichert\n" << endl;

   //Kilometerabfrage

   cout << "Kilometer angeben" << endl;
   cin >> Kilometer;
   cout << endl;
   cout << Kilometer << " Eingabe Gespeichert\n" << endl;

   //Lehrerabfrage

   cout << "Lehrer angeben" << endl;
   cin >> Lehrer;
   cout << endl;
   cout << Lehrer << " Eingabe Gespeichert\n" << endl;

   //Rechnung

   (Ergebnis1 = Schueler * preisSchueler);
   cout << "Speichert Ergebnis 1...\n";
   cout << Ergebnis1 << endl;

   (Ergebnis2 = Kilometer * preis);
   cout << "Speichert Ergebnis 2...\n";
   cout << Ergebnis2 << endl;

   (Ergebnis3 = Lehrer * Lehrerpreis);
   cout << "Speichert Ergebnis 3...\n";
   cout << Ergebnis3 << endl;

   //IF Abfrage

   cout << "Schueler werden gezaehlt" << endl;

   if (Schueler >= 10){
       Ergebnis1 = Ergebnis1 - 0.05;
}
   if (Schueler >= 20){
       Ergebnis1 = Ergebnis1 - 0.05;
}
   if (Schueler >= 30){
       Ergebnis1 = Ergebnis1 - 0.05;
}
   if (Schueler >=40){
       Ergebnis1 = Ergebnis1 - 0.05;
}
   cout << endl;

   //Endrechnung

   cout << "Ihre Kosten betragen : " << Ergebnis1 + Ergebnis2 + Ergebnis3 << " Euro\n";


}
