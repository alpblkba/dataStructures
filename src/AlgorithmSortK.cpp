#include "AlgorithmSortK.h"


AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {

	int key = this->k;

	
}

int index = 0;
int i = 0;

int AlgorithmSortK::select() {
	int size = 0;
	cin >> size;
	int key = (this->k)+1;
	int* Array = NULL;
	Array = new int[key + 1];

	int temp;
	for (int i = 0; i < key; i++) {
		cin >> temp;
		Array[i] = temp;
	}

	
	for (int i = 1; i < key; i++) {
		index = Array[i];
		int j = i - 1;
		while (j >= 0 && Array[j] > index) {
			Array[j + 1] = Array[j];
			j = j - 1;
		}
		Array[j + 1] = index;
	}

	int K = 0;
	/*
	int dif = size - key;
	cout << dif << endl;
	*/
	while (K < size - key) {
		cin >> temp;
		//cout << dif << endl;
		for (int i = key - 1; (i >= 0 && Array[i] > temp); i--) {
			Array[i + 1] = Array[i];
		}
		Array[i + 1] = temp;
		K++;
	}
	

	return Array[key - 1];
	
	
}