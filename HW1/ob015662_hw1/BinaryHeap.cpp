#include "BinaryHeap.h"

BinaryHeap::BinaryHeap(int capacity) {
	this->capacity = capacity;
	// The element at index 0 is not used!
	// The root element will be placed at index 1
	heap = new int[capacity + 1];
	size = 0;
}

void BinaryHeap::insert(int element) {
	//insert item x, allowing duplicates

	//heap.resize(heap.size() * 2);
	//}

	//percolate up
	if (size < capacity) {
		int hole = ++size;
		for (; hole > 1 && element < heap[hole / 2]; hole /= 2) {
			heap[hole] = heap[hole / 2];
		}
		heap[hole] = element;
	}
}

void BinaryHeap::deleteMin() {
	if (size < 1)
		return;
	heap[1] = heap[size];
	heap[size--] = 0;
	percolateDown(1);
	// If the size is less than 1, do nothing and stop
	// Otherwise, replace the root of the heap with the last element on the last level
	// Then, call the percolateDown function by providing the index of the root node, i.e., 1
}
void BinaryHeap::percolateDown(int hole) {

	int left = hole * 2;
	int right = hole * 2 + 1;
	if (right <= size && heap[left] < heap[right]) {
		if (heap[hole] > heap[left]) {
			swap(hole, left);

			percolateDown(left);
		}
	}
	else {
		if (right <= size && heap[hole] > heap[right]) {
			swap(hole, right);

			percolateDown(right);
		}
		else if (left == size && heap[hole] > heap[left]) {
			swap(hole, left);

			percolateDown(left);
		}
	}
}


	int BinaryHeap::getMin() {

		if (size < 1)
			return -1;
		else
		{
			return heap[1];
		}

	}
	// If the size is less than 1, return -1
	// Otherwise, return the value of the root node



	// Compare the node with its children; if they are in the correct order, stop
	// Otherwise, swap the element with the smallest child
	// Repeat the operation for the swapped child node


void BinaryHeap::swap(int i, int j) {
	int t = heap[i];
	heap[i] = heap[j];
	heap[j] = t;
}

BinaryHeap::~BinaryHeap() {
	delete[] heap;
}
