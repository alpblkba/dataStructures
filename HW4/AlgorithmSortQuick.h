#ifndef _ALGORITHMSORTQUICK_
#define _ALGORITHMSORTQUICK_

#include <iostream>
#include <utility>
#include "SelectionAlgorithm.h"

using namespace std;

class AlgorithmSortQuick : public SelectionAlgorithm {


public:

	AlgorithmSortQuick(int k);
	virtual int select();
	int quickselect(int* numbers, int left, int right, int k);

private:

	int median(int*, int, int);
	int* numbers;
	int size;
	int insertionSort(int*, int, int);

	
};

#endif