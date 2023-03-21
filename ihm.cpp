#include <iostream>
#include "ihm.h"
#include "calcul.h"

using namespace std;

void Ihm::menu(void){

    cout << "Menu de choix\n";
    cout << "----------------------------------------------------------\n";
    cout << "Inverse\t\t\ti\nReste et Quotient\td\nMini et Maxi\t\tm\n";
    cout << "Arret\t\t\tf\n";
    cout << "----------------------------------------------------------\n";
    cout << "\nRentrez vore choix : ";
    cin >> choice;
}

void Ihm::lancer(void){
    do {
        menu();
        traitechoix();
    } while (choice != 'f');
}

void Ihm::traitechoix(void){
    float nb, inv;
    int m, n, q, r;
    float a, b, c, d, min, max;
    Calcul MonCalcul;

    switch (choice) {
        case 'i': //INVERSE
                 cout << "\nEntrer le nombre à inverser : ";
                 cin >> nb;

                 inv = MonCalcul.inverse(nb);

                 cout.precision(2);
                 cout << "\nL'inverse est égal à : " << inv << "\n\n";
            break;

        case 'd': //RESTE ET QUOTIENT
                cout << "\nEntrer deux nombres à diviser : ";
                cin >> m;
                cin >> n;

                r = MonCalcul.reste(m, n);
                q = MonCalcul.quotient(m, n);


                cout << "Le reste est de : " << r << "\n";
                cout << "Le quotient est de : " << q << "\n\n";

            break;

        case 'm': //MINI MAXI
                   cout << "\nEntrer 4 nombres pour trouver le maximum et le minimum : ";
                   cin >> a;
                   cin >> b;
                   cin >> c;
                   cin >> d;

                   max = MonCalcul.max(a, b, c, d);
                   min = MonCalcul.min(a, b, c, d);

                   cout << "Le maximum de la suite est : " << max << "\n";
                   cout << "Le minimum de la suite est : " << min << "\n\n";
            break;

        default: //ARRET PROG
           cout << "Arrêt du programme\n";
            break;
    }
}

