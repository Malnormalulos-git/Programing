#include "header.h"

int main(){
	int n;
	cout << "enter the size of array...\n";
	cin >> n;
	std::mt19937 gen;
	gen.seed(time(0));
	time_t start, stop;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
		arr[i] = gen()%n;
	int key = gen()%n;
	cout << "to find: " << key << endl;
	cout << "linear search started...\n";
	start = clock();
	lSearch(arr, key, n);
	stop = clock() - start;
	printf("time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
	cout << "binary search started...\n";
	cout << "sorting started (please, wait a bit)...";
	qSort(arr, 0, n-1);
//	bubbleSort(arr, n);
//	sSort(arr, n);
//	iSort(arr, n);
	cout << "sorting stopped.\n";
	start = clock();
	bSearch(arr, key, 0, n-1);
	stop = clock() - start;
	printf("time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
	delete[] arr;
	return 0;
}
