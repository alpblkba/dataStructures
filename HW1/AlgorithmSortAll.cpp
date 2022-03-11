#include "AlgorithmSortAll.h"


AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {
}

int* pointerArray = NULL;

int AlgorithmSortAll::select() {
	int N;
	cin >> N;
	
	pointerArray = new int[N];
	for (int m = 0; m < N; m++)
		cin >> pointerArray[m];

	int j, key;
	for (int i = 1; i < N; i++) {
		j = i - 1;
		key = pointerArray[i];
		//cout << key << endl;

		while (j >= 0 && pointerArray[j] > key) {
			pointerArray[j + 1] = pointerArray[j];
			j = j - 1;
		}
		pointerArray[j + 1] = key;
	}
	return pointerArray[k];
}



