#ifndef _ALGORITHMSORTHEAP_
#define _ALGORITHMSORTHEAP_
#include <iostream>
#include "BinaryHeap.h"
#include "SelectionAlgorithm.h"


using namespace std;

class AlgorithmSortHeap : public SelectionAlgorithm {

public: 

	int select();
	AlgorithmSortHeap(int k);
	~AlgorithmSortHeap();

private:
	BinaryHeap* heap;

};
#endif