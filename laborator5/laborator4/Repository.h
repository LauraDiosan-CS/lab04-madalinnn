#pragma once
#include "Cheltuiala.h"

class Repository{
private:
	Cheltuiala elem[10];
	int size;

public:
	Repository();
	void addElem(Cheltuiala);
	Cheltuiala* getAll();
	int getSize();
	int findElem(Cheltuiala);
	Cheltuiala getItemFromPos(int);
	void delElem(Cheltuiala);
	void updateElem(Cheltuiala, int, int, char*);
	~Repository();
};
