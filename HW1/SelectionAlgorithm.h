#ifndef _SELECTIONALGORITHM_
#define _SELECTIONALGORITHM_
#include <iostream>
#include <string>
#include <utility>

using namespace std;

class SelectionAlgorithm {

public:
	virtual int select() = 0;
	SelectionAlgorithm(int k);

protected:

	int k;


};
#endif
