#pragma once
#include <iostream>
using namespace std;

class Cheltuiala {
private:
	int zi;
	int suma;
	char* tip;
public:
	Cheltuiala();
	Cheltuiala(int,int,const char*);
	Cheltuiala(const Cheltuiala&);
	Cheltuiala& operator=(const Cheltuiala&);
	int getZi();
	int getSuma();
	char* getTip();
	void setZi(int);
	void setSuma(int);
	void setTip(char*);
	bool operator==(const Cheltuiala&);
	~Cheltuiala();
	friend ostream& operator<<(ostream& os, const Cheltuiala& c);
};
