#include "Cheltuiala.h"
#include <string.h>

Cheltuiala::Cheltuiala() {
	zi = 0;
	suma = 0;
	tip = NULL;
}

Cheltuiala::Cheltuiala(int zi, int suma, const char* tip) {
	this->zi = zi;
	this->suma = suma;
	this->tip = new char[strlen(tip) + 1];
	strcpy_s(this->tip, strlen(tip) + 1, tip);
}

Cheltuiala::Cheltuiala(const Cheltuiala& c) {
	this->zi = c.zi;
	this->suma = c.suma;
	this->tip = new char[strlen(c.tip) + 1];
	strcpy_s(this->tip, strlen(c.tip) + 1, c.tip);
}

int Cheltuiala::getZi() {
	return zi;
}

int Cheltuiala::getSuma() {
	return suma;
}

char* Cheltuiala::getTip() {
	return tip;
}

void Cheltuiala::setZi(int z) {
	zi = z;
}

void Cheltuiala::setSuma(int s) {
	suma = s;
}

void Cheltuiala::setTip(char* t) {
	if (tip) delete[]tip;
	tip = new char[strlen(t) + 1];
	strcpy_s(tip, strlen(t) + 1, t);
}

Cheltuiala::~Cheltuiala() {
	zi = 0;
	suma = -1;
	if (tip) delete[]tip;
	tip = NULL;
}

Cheltuiala& Cheltuiala::operator=(const Cheltuiala& c) {
	if (this == &c) return *this; 
	if (tip) delete[] tip;
	tip = new char[strlen(c.tip) + 1];
	strcpy_s(tip,strlen(c.tip) + 1, c.tip);
	zi = c.zi;
	suma = c.suma;
	return *this;
}

bool Cheltuiala::operator==(const Cheltuiala& c) {
	return (strcmp(tip, c.tip) == 0) and (zi == c.zi) and (suma==c.suma);
}