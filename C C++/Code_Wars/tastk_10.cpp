#include <stdio.h>
#include <string.h>
void lastSurvivors(const char * str, char * out) {
	strcpy(out, str);
	int i = 0;
	char * same_element = NULL;
  printf("%s", str);
	while(out[i]){
		if((same_element = strchr(&(out[i + 1]), out[i])) != NULL){
			if(++(out[i]) > 'z')
				out[i] = 'a';
			strcpy(same_element, same_element + 1);
			same_element = NULL;
			i = 0;
		}
		else
			i++;
	}
}

int main(){
	char symbol = 'a';
	char String[] = "azzcde";
	char *out = new char[10];
	printf("%s\n", String);
	lastSurvivors(String, out);
	printf("%s\n", out);
	return 0;
}
