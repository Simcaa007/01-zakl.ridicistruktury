// 01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Pro start zadejte 1: ";
    int zacatek;
    cin >> zacatek;

    while (zacatek == 1)
    {
        char typ;
        cout << "Zadejte typ: ";
        cin >> typ;

        if (typ == 'm')
        {
            srand(time(0));
            double a = 1 + (double)rand() / RAND_MAX * 9;
            int n = rand() % 11 + (-5);
            cout << a << " a " << n << endl;
            int mocnina = 1;

            if (n > 0)
            {
                for (int i = 0; i < n; i++)
                    mocnina *= a;
                cout << "Mocnina je " << mocnina << endl;
            }
            else if (n < 0)
            {
                for (int i = 0; i < -n; i++)
                    mocnina *= a;
                cout << "Mocnina je 1/" << mocnina << endl;
            }
        }

        if (typ == 's')
        {
            cout << "Zadejte cele nezaporne cislo: ";
            int n;
            cin >> n;
            int soucet = 0;
            while (n > 0)
            {
                soucet += n % 10;
                n /= 10;
            }

            cout << soucet << endl;
        }

        if (typ == 'k')
        {
            cout << "Konec programu";
            return 0;
        }

        continue;
        cin >> typ;
    }
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
