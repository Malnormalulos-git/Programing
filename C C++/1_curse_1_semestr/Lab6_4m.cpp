#include <iostream>
#pragma pack(push,1)
struct employee{
	char *surname;
	short year;
	unsigned char sex: 1;//1-man, 0-woman
	unsigned char edu: 2;//0-incomplete secondary education, 1-secondary education, 2-special secondary education, 3-higher education
	unsigned char exp: 5;//0-31
};
int main(){
	employee em[3]={"Filippenkov", 2003, 1, 1, 0, "Stelmah", 1993, 0, 3, 4};
	em[2].surname="Herrington";
	em[2].year=1976;
	em[2].sex=1;
	em[2].edu=2;
	em[2].exp=21;
	for(int i=0; i<3; i++){
		printf("\tEmplpoee %d\nSurname: %s\nYear of birth: %d\n", (i+1), em[i].surname, em[i].year);
		if(em[i].sex==1)
			puts("Sex: man");
		else
			puts("Sex: woman");
		switch(em[i].edu){
			case 0:puts("Education: incomplete secondary"); break;
			case 1:puts("Education: secondary"); break;
			case 2:puts("Education: special secondary"); break;
			case 3:puts("Education: higher education"); break;
		}
		printf("Experience: %d\n\n", em[i].exp);
	}
	printf("Sizeof(array of structures): %d\nSizeof(structure): %d\n\n",sizeof(em), sizeof(em[0]));
	system("pause");
	return 0;
}

