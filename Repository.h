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
	~Repository();
};
