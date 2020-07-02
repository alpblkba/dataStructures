#include <iostream>
#include "AlgorithmSortAll.h"

AlgorithmSortAll::AlgorithmSortAll() : SelectionAlgorithm(k) {


}
int AlgorithmSortAll::select() {
	int key;
	cin >> key;
	int* array = insertionSort(1, 2);
	int result = array[key-1];
	delete[] array;
	return result;

}

AlgorithmSortAll :: ~AlgorithmSortAll() {

	//delete[] insertionSort(1,2);
}