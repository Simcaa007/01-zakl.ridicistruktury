// 03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

int main()
{
    int volba;
    do {
        cout << "1: while\n2: do while\n3: for\n4: konec\n";
        cout << "tvoje volba: ";
        cin >> volba;
        int soucin = 1;
        switch (volba) {
        case 1: {
            cout << "Zadejte posloupnost cisel";
            int c = 1;
            while (c != 0) {
                soucin *= c;
                cin >> c;
            }
            cout << soucin << endl;
        }break;
        case 2: {
            cout << "Zadejte posloupnost cisel";
            int c = 1;
            do {
                soucin *= c;
                cin >> c;
            } while (c != 0);
            cout << soucin << endl;
        }break;
        case 3: {
            cout << "Pouzit for neni vhodne, protoze nezname predem pocet prvku posloupnosti ";
        }break;
        case 4: {
            cout << "konec";
        }break;
        }

    } while (volba != 4);
}