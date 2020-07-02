#include <iostream>
#include <string>
#include <utility>
#include "AlgorithmSortQuick.h"
#include "SelectionAlgorithm.h"

using namespace std;

AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k) {
	cin >> size;
	//cout << size << endl;
	numbers = new int[size];
}


int AlgorithmSortQuick::median(int* numbers, int left, int right) {

	int center = (left + right) / 2;
	if (numbers[center] < numbers[left])
		swap(numbers[center], numbers[left]);
	if (numbers[right] < numbers[left])
		swap(numbers[left], numbers[right]);
	if (numbers[right] < numbers[center])
		swap(numbers[right], numbers[center]);


	swap(numbers[center], numbers[right - 1]);
	return numbers[right - 1];
}


int AlgorithmSortQuick::insertionSort(int* numbers, int left, int right) {

	for (int i = left + 1; i < right + 1; i++) {
		int a = i - 1;
		int val = numbers[i];

		while (a >= 0 && numbers[a] > val) {
			numbers[a + 1] = numbers[a];
			a = a - 1;
		}
		numbers[a + 1] = val;

	}
	return numbers[k - 1];
}
//BRUH

int AlgorithmSortQuick::quickselect(int* numbers, int left, int right, int k) {

	if (left > right - 10) insertionSort(numbers, left, right);

	else if (left <= right - 10) {
		int pivot = median(numbers, left, right);

		int i = left, j = right - 1;

		for (;;) {
			while (numbers[++i] < pivot) {}
			while (pivot < numbers[--j]) {}
			if (i < j)
				swap(numbers[i], numbers[j]);
			else
				break;
		}
		swap(numbers[i], numbers[right - 1]);
		if (k < i - 1)
			return quickselect(numbers, left, i - 1, k);
		else if (k == i)
			return pivot;
		else
			return quickselect(numbers, i + 1, right, k);
	}


	return numbers[k];

}
int AlgorithmSortQuick::select() {

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}
	return quickselect(numbers, 0, size - 1, k);
}
