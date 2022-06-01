#include "AlgorithmSortHeap.h"

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
	this->k = k;

}

int AlgorithmSortHeap::select() {
	int N;
	cin >> N;
	BinaryHeap* heap = new BinaryHeap(k);
	for (int i = 0; i < k; i++) {
		int A;
		cin >> A;
		heap->insert(A);
	}

	int j = N - k;
	while (j-- > 0) {
		int t;
		cin >> t;
		if (t < heap->getMin())
			continue;
		heap->deleteMin();
		heap->insert(t);
	}
	return heap->getMin();

}

AlgorithmSortHeap::~AlgorithmSortHeap() {
	delete heap;
}