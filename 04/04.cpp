// 04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

int main()
{
	int volba;

	do {

		cout << "1: vypis zadaneho mesice podle cisla\n2: vypis vsech mesicu od m do konce roku\n3: konec"<< endl;
		cout << "Vase volba: ";
		cin >> volba;

		switch (volba)
		{
		case 1: {
			int m;
			cout << "Zadejte cislo mesice: ";
			cin >> m;

			switch (m)
			{
			case 1: cout << "Leden\n"; break;
			case 2: cout << "Unor\n"; break;
			case 3: cout << "Brezen\n"; break;
			case 4: cout << "Duben\n"; break;
			case 5: cout << "Kveten\n"; break;
			case 6: cout << "Cerven\n"; break;
			case 7: cout << "Cervenec\n"; break;
			case 8: cout << "Srpen\n"; break;
			case 9: cout << "Zari\n"; break;
			case 10: cout << "Rijen\n"; break;
			case 11: cout << "Listopad\n"; break;
			case 12: cout << "Prosinec\n"; break;
			}

		}break;

		case 2: {
			int m;
			cout << "Od ktereho mesice chcete vypsat? ";
			cin >> m;
			switch (m) {
			case 1: cout << "Leden\n";
			case 2: cout << "Unor\n"; 
			case 3: cout << "Brezen\n";
			case 4: cout << "Duben\n";
			case 5: cout << "Kveten\n";
			case 6: cout << "Cerven\n";
			case 7: cout << "Cervenec\n";
			case 8: cout << "Srpen\n";
			case 9: cout << "Zari\n";
			case 10: cout << "Rijen\n";
			case 11: cout << "Listopad\n";
			case 12: cout << "Prosinec\n"; break;
			}

		}break;

		case 3: {
			cout << "Konec programu";
		}break;
		} 

	} while (volba != 3);
}
