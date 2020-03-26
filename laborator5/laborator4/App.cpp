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
	cout << "4. Stergere cheltuiala" << endl;
	cout << "5. Modificare cheltuiala" << endl;
	cout << "x. Iesire" << endl;
}

int main() {
	test();
	test_service();
	int zi, suma, zi1, suma1;
	char* tip = new char[20];
	char* tip1 = new char[20];
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
			for (int i = 0; i < rep.getSize(); i++) {
				cout << rep.getAll()[i];
			}
		}
		else if (optiune == '3') {
			cout << "Numarul curent al cheltuielilor introduse:" << rep.getSize() << endl;
		}
		else if (optiune == '4') {
			cout << endl << "Introduceti ziua cheltuielii de sters: "; cin >> zi;
			cout << endl << "Introduceti suma cheltuielii de sters: "; cin >> suma;
			cout << endl << "Introduceti tipul cheltuielii de sters: "; cin >> tip;
			c = Cheltuiala(zi, suma, tip);
			rep.delElem(c);
		}
		else if (optiune == '5') {
			cout << endl << "Introduceti ziua cheltuielii de modificat: "; cin >> zi;
			cout << endl << "Introduceti suma cheltuielii de modificat: "; cin >> suma;
			cout << endl << "Introduceti tipul cheltuielii de modificat: "; cin >> tip;
			cout << endl << "Introduceti noua zi a cheltuielii de modificat: "; cin >> zi1;
			cout << endl << "Introduceti noua suma a cheltuielii de modificat: "; cin >> suma1;
			cout << endl << "Introduceti noul tip al cheltuielii de modificat: "; cin >> tip1;
			c = Cheltuiala(zi, suma, tip);
			rep.updateElem(c,zi1,suma1,tip1);
		}
		else if (optiune == 'x') {
			break;
		}
		else cout << "Optiune invalida";
	}
	return 0;
}