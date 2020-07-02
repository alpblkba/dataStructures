#ifndef _ALGORITHMSORTALL_
#define _ALGORITHMSORTALL__
#include <string>
#include <iostream>
#include "SelectionAlgorithm.h"
using namespace std;


class AlgorithmSortAll : public SelectionAlgorithm {


public:
	int select();
	AlgorithmSortAll();
	~AlgorithmSortAll();

};

#endif

