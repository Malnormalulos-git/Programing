#include <iostream>
int main(){//C
	int n, m, a, b;
	scanf("%d %d %d %d", &n, &m, &a, &b);
	bool original_arr[n][m];
	char str[m+1];
	int i, j, si, sj;
	for(i = 0; i < n; i++){
		scanf("%s", &str[0]);
		for(j = 0; j < m; j++){
			original_arr[i][j] = (bool)(str[j] - '0');
		}
	}
	for(i = 0; i < n; i++){
		for(si = 0; si < a; si++){
			for(j = 0; j < m; j++){
				for(sj = 0; sj < b; sj++){
					printf("%d", original_arr[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
