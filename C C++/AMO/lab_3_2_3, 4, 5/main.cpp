#include "header.h"

int main(){
	std::mt19937 gen;
	gen.seed(time(0));
	time_t start, stop;
	
	ofstream file;
	file.open("task_3_1.txt");
	ofstream file1;
	if(!file){
		exit(-1);
	}
	file1.open("task_3_2.txt");
	if(!file1){
		exit(-2);
	}	
	
	int n = 4;
	int size;
	float lSearchAv;
	float bSearchAv;
	puts("\t____________________________");
	puts("\t|n\t |f1(n), s|f2(n), s|");
	puts("\t|--------------------------|");
	
	while(n <= 7){
		size = pow(10, n);
		int *arr = new int[size];
		lSearchAv = 0;
		bSearchAv = 0;
		for(int j = 0; j < 5; j++){
			for(int i = 0; i < size; i++)
				arr[i] = gen()%size;
			int key = gen()%size;
			start = clock();
			lSearch(arr, key, size);
			stop = clock() - start;
//			printf("L time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
			lSearchAv+=float((float)stop/CLOCKS_PER_SEC);
			
			qSort(arr, 0, size - 1);
			start = clock();
			bSearch(arr, key, 0, size - 1);
			stop = clock() - start;
//			printf("B time elapsed: %.3f s\n\n", float((float)stop/CLOCKS_PER_SEC));
			bSearchAv+=float((float)stop/CLOCKS_PER_SEC);
		}
		lSearchAv = lSearchAv/5;
		bSearchAv = bSearchAv/5;
		file << size << " " << (float)lSearchAv << endl;
		file1 << size << " " << (float)bSearchAv << endl;
		printf("\t|%-8d|%f|%f|\n", size, lSearchAv, bSearchAv);
		puts("\t|--------------------------|");
		n++;
		delete[] arr;
	}
	
	file.close();
	file1.close();
	

	
	file.open("task_4_1.txt");
	if(!file){
		exit(-1);
	}
	
	n = 1;
	float bubbleSortAv;
	
	puts("\t___________________");
	puts("\t|n\t |f1(n), s|");
	puts("\t|-----------------|");
	
	while(n <= 4){
		size = 10000 * n;
		int *arr = new int[size];
		bubbleSortAv = 0;
		for(int j = 0; j < 5; j++){
			for(int i = 0; i < size; i++)
				arr[i] = gen()%size;
			start = clock();
			bubbleSort(arr, size);
			stop = clock() - start;
//			printf("B time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
			bubbleSortAv+=float((float)stop/CLOCKS_PER_SEC);
		}
		bubbleSortAv = bubbleSortAv/5;
		file << size << " " << (float)bubbleSortAv << endl;
		printf("\t|%-8d|%f|\n", size, bubbleSortAv);
		puts("\t|-----------------|");
		n++;
		delete[] arr;
	}
	
	file.close();
	
	
	
	file.open("task_4_2.txt"); // сортування вибором, 1 варіант
	if(!file){
		exit(-1);
	}
	
	n = 1;
	float sSortAv;
	
	puts("\t___________________");
	puts("\t|n\t |f1(n), s|");
	puts("\t|-----------------|");
	
	while(n <= 4){
		size = 10000 * n;
		int *arr = new int[size];
		sSortAv = 0;
		for(int j = 0; j < 5; j++){
			for(int i = 0; i < size; i++)
				arr[i] = gen()%size;
			start = clock();
			sSort(arr, size);
			stop = clock() - start;
//			printf("S time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
			sSortAv+=float((float)stop/CLOCKS_PER_SEC);
		}
		sSortAv = sSortAv/5;
		file << size << " " << (float)sSortAv << endl;
		printf("\t|%-8d|%f|\n", size, sSortAv);
		puts("\t|-----------------|");
		n++;
		delete[] arr;
	}
	
	file.close();
	
	
	
//	file.open("task_4_2.txt"); // сортування вставкою, 2 варіант
//	if(!file){
//		exit(-1);
//	}
//	
//	n = 1;
//	float iSortAv;
//	
//	puts("\t___________________");
//	puts("\t|n\t |f1(n), s|");
//	puts("\t|-----------------|");
//	
//	while(n <= 4){
//		size = 10000 * n;
//		int *arr = new int[size];
//		iSortAv = 0;
//		for(int j = 0; j < 5; j++){
//			for(int i = 0; i < size; i++)
//				arr[i] = gen()%size;
//			start = clock();
//			iSort(arr, size);
//			stop = clock() - start;
////			printf("I time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
//			iSortAv+=float((float)stop/CLOCKS_PER_SEC);
//		}
//		iSortAv = iSortAv/5;
//		file << size << " " << (float)iSortAv << endl;
//		printf("\t|%-8d|%f|\n", size, iSortAv);
//		puts("\t|-----------------|");
//		n++;
//		delete[] arr;
//	}
//	
//	file.close();
	
	
	
	file.open("task_5.txt");
	if(!file){
		exit(-1);
	}
	
	n = 1;
	float qSortAv;
	
	puts("\t___________________");
	puts("\t|n\t |f1(n), s|");
	puts("\t|-----------------|");
	
	while(n <= 4){
		size = 1000000 * n;
		int *arr = new int[size];
		qSortAv = 0;
		for(int j = 0; j < 5; j++){
			for(int i = 0; i < size; i++)
				arr[i] = gen()%size;
			start = clock();
			qSort(arr, 0, size - 1);
			stop = clock() - start;
//			printf("Q time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
			qSortAv+=float((float)stop/CLOCKS_PER_SEC);
		}
		qSortAv = qSortAv/5;
		file << size << " " << (float)qSortAv << endl;
		printf("\t|%-8d|%f|\n", size, qSortAv);
		puts("\t|-----------------|");
		n++;
		delete[] arr;
	}
	
	file.close();
	
	return 0;
}
