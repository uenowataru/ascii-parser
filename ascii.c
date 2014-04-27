#include <stdio.h>
int main(int argc, char* argv[]){
	char* str;
	char resp[] = "No argument passed in.";
	if(argc > 1) str = argv[1];
	else str = resp;
	int i = 0;

	printf("%s\n", str);
	printf("printf(\"");
    while(str[i]) printf("\\%o",str[i++]);
    printf("\\n\");\n");
    return 0;
}