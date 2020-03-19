#include <iostream>
#include "Repository.h"
#include "Cheltuiala.h"
#include "Test.h"
using namespace std;


void meniu() {
	//Afisare meniu
	cout << "1. Adaugare cheltuiala" << endl;
	cout << "2. Afisare cheltuieli" << endl;
	cout << "3. Afisare dimensiune lista cheltuieli" << endl;
	cout << "x. Iesire" << endl;
}

int main() {
	test();
	int zi, suma;
	char* tip = new char[20];
	char optiune;
	Repository rep;
	Cheltuiala c;
	while (true) {
		meniu();     
		cout << "Alege optiunea: ";
		cin >> optiune;
		if (optiune == '1') {
			cout << endl << "Introduceti ziua: "; cin >> zi;
			cout << endl << "Introduceti suma: "; cin >> suma;
			cout << endl << "Introduceti tipul cheltuielii: "; cin >> tip;
			c = Cheltuiala(zi, suma, tip);
			rep.addElem(c);
		}
		else if (optiune == '2') {
			rep.getAll();
		}
		else if (optiune == '3') {
			cout << "Numarul curent al cheltuielilor introduse:" << rep.getSize() << endl;
		}
		else if (optiune == 'x') {
			break;
		}
		else cout << "Optiune invalida";
	}
	return 0;
}