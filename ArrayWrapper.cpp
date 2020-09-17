#include "ArrayWrapper.h"
#include <fstream>
#include <iostream>

using namespace std;

ArrayWrapper::ArrayWrapper(int*, int) {

}

void ArrayWrapper::readArray(int* pole, int velikost)
{
	std::ifstream myfile("input.txt");
	if (myfile.is_open()) {
		for (int i = 0; i < velikost; i++)
		{
			myfile >> pole[i];
		}
		myfile.close();
	}
	else {
		std::cout << "Can't find input file " << std::endl;
	}
	return;
}

void ArrayWrapper::printArray(int* pole, int velikost)
{
	for (int i = 0; i < velikost; i++) {
		std::cout << pole[i] << " ";
	}
	return;
}

void ArrayWrapper::writeToArray(int* pole, int velikost) {
	std::ofstream myfile("output.txt");
	if (myfile.is_open()) {
		for (int i = 0; i < velikost; i++) {
			myfile << pole[i] << " ";
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";
}

void ArrayWrapper::swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	return;
}

void ArrayWrapper::sort(int* pole, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		// Last i elements are already in place  
		for (j = 0; j < n - i - 1; j++)
			if (pole[j] > pole[j + 1])
				swap(&pole[j], &pole[j + 1]);
	return;
}
