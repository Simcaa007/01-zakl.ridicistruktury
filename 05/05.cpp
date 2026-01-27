// 05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Vyberte volbu programu:\n1: faktorial\n2: soucin\n3: konec" << endl;
	int volba;


    do {
		srand(time(0));
		cin >> volba;

		switch (volba)
		{
		case 1: {
			int n;
			cout << "Zadejte cele nezaporne cislo n: ";
			cin >> n;

			int f = 1;

			for (n; n > 1; n--) {
				f *= n;
			}
			cout << "Faktorial zadaneho cisla je: " << f << endl;
		
		}break;
		case 2: {

			double a = (double)rand() / (RAND_MAX + 1) * (20 - 2) + 2; // (double)rand()/(RAND_MAX + 1)*(Y-X)+X;
			int n = rand() % (10 - (-8)) - 8;	// rand() % (b - a) + a;
			
			double soucin = 0;
			while (a > 0) {
				soucin += n;
				a--;
			}

			cout << a << " " << n << " " << soucin << endl;

		}break;
		}


	} while (volba != 3);

}
