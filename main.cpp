#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "ArrayWrapper.h"

#define VELIKOST 10

using namespace std;

int main() {
	srand(time_t(NULL));
	int pole[VELIKOST];
	ArrayWrapper* pole1 = new ArrayWrapper(pole, VELIKOST);
	pole1->readArray(pole, VELIKOST);
	pole1->printArray(pole, VELIKOST);
	pole1->sort(pole, VELIKOST);
	cout << endl;
	pole1->printArray(pole, VELIKOST);
	pole1->writeToArray(pole, VELIKOST);
	delete pole1;
	return 0;
}
