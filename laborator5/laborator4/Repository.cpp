#include "Repository.h"

Repository::Repository() { 
	size = 0; 
}

void Repository::addElem(Cheltuiala c) {
	/*Adauga o noua cheltuiala in lista de cheltuieli
	  Input: c, Cheltuiala: cheltuiala de adaugat
	  Output:-	  
	*/
	elem[size++] = c;
}

int Repository::findElem(Cheltuiala c) {
	/*Cauta o cheltuiala in lista de cheltuieli
	  Input: c, Cheltuiala: cheltuiala de cautat
	  Output: Returneaza pozitia daca cheltuiala s-a gasit, respectiv -1 in caz contrar
	*/
	int i = 0;

	while (i < size) {
		if (elem[i] == c) return i;
	}
	return -1;
}

void Repository::delElem(Cheltuiala c) {
	/*Sterge o cheltuiala din lista de cheltuieli
	  Input: c, Cheltuiala: cheltuiala de sters
	  Output: -
	*/
	int i = findElem(c);
	if (i != -1)
		elem[i] = elem[size - 1];
	size--;
}

void Repository::updateElem(Cheltuiala c, int zi, int s, char* t) {
	/*Modifica o cheltuiala din lista de cheltuieli
	  Input: c, Cheltuiala: cheltuiala de modificat
	         zi, int: noua zi in care s-a realizat cheltuiala
			 s, int: noua suma a cheltuielii
			 t, char*: noul tip al cheltuielii
	  Output: -
	*/
	int i = findElem(c);
	elem[i].setZi(zi);
	elem[i].setSuma(s);
	elem[i].setTip(t);

}

Cheltuiala* Repository::getAll() {
	/*Acceseaza toate cheltuielile din repository
	  Output: lista de cheltuieli
	*/
	return elem;
}
int Repository::getSize() {
	/*Acceseaza dimensiunea listei de cheltuieli(numarul curent al cheltuielilor)
	  Output: numarul de cheltuieli
	*/
	return size;
}

Cheltuiala Repository::getItemFromPos(int i) {
	/*Returneaza cheltuiala de pe o anumita pozitie
	  Input: i, int: pozitia data
	  Output: cheltuiala de pe pozitia i
	*/
	return elem[i];
}

Repository::~Repository() {
	//destructorul
}
