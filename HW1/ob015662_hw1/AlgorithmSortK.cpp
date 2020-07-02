#include "AlgorithmSortK.h"
#include "iostream"
AlgorithmSortK::AlgorithmSortK() : SelectionAlgorithm(k) {

}
int AlgorithmSortK::select() {
	int n;
	cin >> n;
	//return insertionSort(2, n)[n - 3];
	int *array = insertionSort(2,n);
	int result = array[n - 3];
	delete[] array;
	return result;
}


AlgorithmSortK::~AlgorithmSortK() {

	//delete[] insertionSort(2,1);
}