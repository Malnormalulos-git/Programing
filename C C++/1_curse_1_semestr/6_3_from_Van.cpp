#include <stdio.h>
using namespace std;
union UN{
char arr1[8];
long arr2[2];
};
int main(){
    UN un1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for(int i = 0; i < 8; i++){
        printf("%c ", un1.arr1[i]);
    }
    printf("\n");
    for(int i = 0; i < 2; i++){
        printf("%#x = %lu\n", un1.arr2[i], un1.arr2[i]);
    }
    printf("\nsizeof(union) = %d\n", sizeof(UN));
    return 0;
}
