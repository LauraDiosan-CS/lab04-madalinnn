#include "Repository.h"

Repository::Repository() { 
	size = 0; 
}

void Repository::addElem(Cheltuiala c) {
	//Adauga cheltuiala c in repository
	elem[size++] = c;
}

Cheltuiala* Repository::getAll() {
	//Acceseaza toate cheltuielile din repository
	return elem;
}
int Repository::getSize() {
	//Acceseaza dimensiunea listei de cheltuieli(numarul curent al cheltuielilor)
	return size;
}
Repository::~Repository() {
}
