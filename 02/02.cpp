// 02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

using namespace std;    // abych se nemusela pokaždé odkazovat na tuto knihovnu

int main()
{

    int volba;
    do {
        srand(time(0));     // inicializuje generátor náhodých čísel, aby při každém spuštění programu vznikla jiná posloupnost náhodných čísel
        int n;
        cout << "Zadejte cele cislo n: ";
        cin >> n;
        int Od = 10;
        int Do = 100;
        int soucet = 0;
        cout << "1: while \n2: do while\n3: for\n4: konec\nTvoje volba: ";

        cin >> volba;

        switch (volba) {
        case 1: {
            while (n > 0) {
                int cislo = rand() % (Do - Od) + Od;    // generuje nahodna cela cisla
                cout << cislo << endl;      // endl = ukončení řádku a zaroven vyprazdneni vystupniho bufferu
                soucet += cislo;
                n--;
            }
            cout << "soucet je :";
            cout <<  soucet << endl;
        }break;

        case 2: {
            do {
                int cislo = rand() % (Do - Od) + Od;
                cout << cislo << endl;
                soucet += cislo;
                n--;
            } while (n > 0);
            cout << "soucet je :";
            cout << soucet << endl;
        }break;

        case 3: {
            for (int i = 0; i < n; i++) {
                int cislo = rand() % (Do - Od) + Od;
                cout << cislo << endl;
                soucet += cislo;
            }
            cout << "soucet je :";
            cout << soucet << endl;
        } break;

        case 4: {
            cout << "A je konec";
        }break;

        }

    } while (volba != 4);
    

}