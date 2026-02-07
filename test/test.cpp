// test.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int n;
	int soucet = 0;
	int volba;

	do {
		srand(time(0));
		cout << "1: while 2: do while 3: for 4: konec\nzadejte svoji volbu: ";
		cin >> volba;

		switch (volba) {
			cout << "Zadejte n:";
			cin >> n;
		case 1: {
			while (n > 0) {
				int cislo = rand() % (100 - 10) + 10;
				soucet += cislo;
				cout << cislo << endl;
				n--;
			}

			cout << soucet << endl;
		}break;

		case 2: {

			do {
				int cislo = rand() % (100 - 10) + 10;
				cout << cislo << endl;
				soucet += cislo;
				n--;
			} while (n > 0);

			cout << soucet << endl;

		}break;

		case 3: {
			for (int i = n; i > 0; i--) {
				int cislo = rand() % (100 - 10) + 10;
				cout << cislo << endl;
				soucet += cislo;
			}

			cout << soucet << endl;
		}break;

		case 4: {
			cout << "KONEC\n";
		}
		}

	} while (volba != 4);
}
