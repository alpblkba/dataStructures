#ifndef _TESTBED_
#define _TESTBED_
#include <string>
#include <iostream>
#include <ctime>

#include "SelectionAlgorithm.h"
#include "AlgorithmSortHeap.h"


using namespace std;


class TestBed {

private:

	SelectionAlgorithm* algorithm;

public:

	TestBed();
	void execute();
	void setAlgorithm(int k);
	~TestBed();


};
#endif