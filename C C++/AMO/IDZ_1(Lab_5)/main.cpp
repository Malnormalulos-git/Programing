#include "header.h"

int main(){
	std::mt19937 gen;
	gen.seed(time(0));
	time_t start, stop;
	
//	puts("\n\n\t________________________________________"); // ex 7
//	puts("\t| n  | f1(n)      | f2(n)      | abs() |");
//	puts("\t|----+------------+------------+-------|");
//	for(int n = 0; n < 47; n++){
//		long gfb  = getFiboBinet(n);
//		long gfba = getFiboBinetAlt(n);
//		printf("\t| %-2d | %-11ld| %-11ld|   %-3d |\n", n, gfb, gfba, abs(gfb - gfba));
//	}
//	puts("\t|----|------------|------------|-------|");
	
	
//	puts("\n\n\t____________________"); // ex 6
//	puts("\t| n  | FiboBinet   |");
//	puts("\t|----+-------------|");
//	for(int n = 0; getFiboBinet(n - 1) >= 0; n++){
//		printf("\t| %-2d | %-12ld|\n", n, getFiboBinet(n));
//	}
//	puts("\t|----|-------------|");
	
	
//	puts("\n\n\t_____________________________________________________"); // ex 4
//	puts("\t| n  | ticks\t\t\t| seconds\t    |");
//	puts("\t|----+--------------------------+-------------------|");
//	for(int n = 41; n <= 89; n++){
//		printf("\t| %d | %-17lf\t| %-18lf|\n", n, iterEstim(n)*CLOCKS_PER_SEC, iterEstim(n));
//	}
//	puts("\t|----|--------------------------|-------------------|");
	
	
	
//	puts("\t_____________________________"); // ex 5
//	puts("\t| n  | absolute  | relative |");
//	puts("\t|----+-----------+----------|");
//	for(int n = 0; n <= 40; n++){
//		start = clock();
//		getFibo(n);
//		stop = clock() - start;
//		double tmpIterEstim = iterEstim(n);
//		double tmp = abs((double)stop/CLOCKS_PER_SEC - tmpIterEstim);
//		printf("\t| %-2d | %-6lf  | %-6lf |\n", n, tmp, tmp/tmpIterEstim);
//	}
//	puts("\t|----|-----------|----------|");
	
	
	
//	ofstream file, file1;
//	file.open("task_5_1.txt");
//	if(!file){
//		exit(-1);
//	}
//	file1.open("task_5_2.txt");
//	if(!file1){
//		exit(-2);
//	}
//	
//	int n = 0;
//	float fAv;
//	float bAv;
//	puts("\t_______________________");
//	puts("\t|n  |f1(n), s|f2(n), s|");
//	puts("\t|---------------------|");
//	
//	while(n < 40){
//		n += 10;
//		fAv = 0;
//		bAv = 0;
//		for(int j = 0; j < 5; j++){
//			start = clock();
//			getFibo(n);
//			stop = clock() - start;
////			printf("F time elapsed: %.3f s\n", float((float)stop/CLOCKS_PER_SEC));
//			fAv+=float((float)stop/CLOCKS_PER_SEC);
//			
//			start = clock();
//			getFiboBinet(n);
//			stop = clock() - start;
////			printf("B time elapsed: %.3f s\n\n", float((float)stop/CLOCKS_PER_SEC));
//			bAv+=float((float)stop/CLOCKS_PER_SEC);
//		}
//		fAv /= 5;
//		bAv /= 5;
//		file << n << " " << (float)fAv << endl;
//		file1 << n << " " << (float)bAv << endl;
//		printf("\t|%-3d|%f|%f|\n", n, fAv, bAv);
//		puts("\t|---------------------|");
//	}
//	
//	file.close();
//	file1.close();
	
	return 0;
}
