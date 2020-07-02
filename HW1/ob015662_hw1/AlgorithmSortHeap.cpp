#include "AlgorithmSortHeap.h"


AlgorithmSortHeap::AlgorithmSortHeap(int k):SelectionAlgorithm(k) {

	heap = new BinaryHeap(k);
	//cout << "heap initialize edildi" << endl;
}

int AlgorithmSortHeap::select() {
	int a;
	cin >> a;
	//cout << "icine a aldi" << endl;

	for (int i = 0; i < k; i++) {	
		int n;
		cin >> n;
		heap->insert(n);
		//cout << "insertledik" << endl;	
	}
		
	{
		int j = a - k;
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
	
	return heap->getMin();	
}

AlgorithmSortHeap::~AlgorithmSortHeap() {

	delete heap;
}
