#include <iostream>
#include <string>

#include "TestBed.h"



using namespace std;


TestBed::TestBed() {

	this->algorithm = 0;

}


void TestBed::setAlgorithm(int k) {
	int index;
	cin >> index;

	if (k == 1) {
		algorithm = new AlgorithmSortAll(index);
	}

	if (k == 2) {
		algorithm = new AlgorithmSortK(index);

	}
}

void TestBed::execute() {
	int algorithmType;
	cin >> algorithmType;
	//cout << "algoritma secildi" << endl;
	setAlgorithm(algorithmType);
	
	//cout << "algoritma sortall oldu" << endl;
	

	clock_t start = clock();
	int x = algorithm->select();
	//cout << "algoritma select() calisiyor" << endl;

	clock_t end = clock();
	double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	cout << "Result: " << x << endl;
	cout << "Duration(sec): " << cpu_time << endl;

}

TestBed::~TestBed() {

	delete algorithm;
}

