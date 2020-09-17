#pragma once
class ArrayWrapper {
public:
	ArrayWrapper(int* pole, int velikost);
	void readArray(int* pole, int velikost);
	void printArray(int* pole, int velikost);
	void writeToArray(int* pole, int velikost);
	void sort(int* pole, int velikost);
	void swap(int* xp, int* yp);
};
