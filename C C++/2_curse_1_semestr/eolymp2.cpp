#include <iostream>
#include <math.h>
using namespace std;
struct point{
	int x;
	int y;
	int si;//self index
	int ni;//nearest index
	float dist;
};
int main(){//C
	int n;
	cin >> n;
	int m;
	int tmpK;
	point *arr;
	for(int i = 0; i < n; i++){
		cin >> m;
		arr = new point[m];
		for(int j = 0; j < m; j++){
			cin >> arr[j].x >> arr[j].y;
			arr[j].si 	=  j;
			arr[j].ni 	= -1;
			arr[j].dist =  0;
		}
		for(int j = 0; j < m; j++){
			for(int k = 0; k < m; k++){
				if(arr[j].si == k){
					continue;
				}
				else if(arr[j].ni != -1){
					break;
				}
				else{
					float tmp = sqrt(pow(arr[j].x - arr[k].x, 2) + pow(arr[j].y - arr[k].y, 2));
					if(arr[j].dist == 0 || arr[j].dist > tmp){
						arr[j].dist = tmp;
						tmpK = k;
//						arr[j].ni = k;
					}
				}
			}
			arr[j].ni = tmpK;
			arr[tmpK].ni = j;
			arr[tmpK].dist = arr[j].dist;
//			arr[arr[j].ni].ni = j;
//			arr[arr[j].ni].dist = arr[j].dist;
			if(arr[j].dist - (int)arr[j].dist == 0)
				printf("%.1f ", arr[j].dist);
			else
				printf("%f ", arr[j].dist);
		}
		cout << endl;
		delete [] arr;
	}
	return 0;
}
