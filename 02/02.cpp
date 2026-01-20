// 02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    cout << "Pro začátek zadejte 1: ";
    int zacatek;
    cin >> zacatek;

    while (zacatek == 1)
    {
        int n;
        cout << "Zadejte cele cislo n: ";
        cin >> n;

        cout << "\nZadejte volbu cyklu: while - w, do while - d, for - f: ";
        char volba;
        cin >> volba;

        for (int i = 0; i <= n; i++)
        {
            
        }

        if (volba == 'w') 
        {

        }

        if (volba == 'd')
        {
        }

        if (volba == 'f')
        {
        }

        continue;
    }

    
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// C++ Na vstupu je dáno celé číslo n. 
// Vygenerujte n-prvkovou posloupnost náhodných reálných čísel z intervalu <10;100). 
// Určete a vypište součet prvků posloupnosti. Nechte uživatele zvolit, jakým typem cyklu bude součet spočítán – while, 
// do while a for. Nabídka se bude cyklicky opakovat, dokud uživatel nezadá
//čtvrtou volbu – KONEC.
