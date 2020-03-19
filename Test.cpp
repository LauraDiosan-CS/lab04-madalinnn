#include "Test.h"
#include "Cheltuiala.h"
#include "assert.h"
#include "Repository.h"
#include <iostream>
using namespace std;

void test() {
	//testeaza metode ale clasei Cheltuiala, precum si inregistrarea cheltuilelilor intr-un repository
	Cheltuiala c1(12, 100, "internet");
	Cheltuiala c2(2, 200, "menaj");
	Cheltuiala c3(20, 400, "mancare");
	Cheltuiala chelt[3] = { c1, c2, c3 };
	Repository rep;
	rep.addElem(c1);
	rep.addElem(c2);
	rep.addElem(c3);
	assert(c1.getZi() == 12);
	assert(c2.getSuma() == 200);
	assert(rep.getSize() == 3);
}