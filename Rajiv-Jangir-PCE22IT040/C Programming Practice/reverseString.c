#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100]; 
    int l, i; 

    printf("Input the string : ");

    fgets(str, sizeof str, stdin);

    l = strlen(str);
    printf("The characters of the string in reverse are : \n");

    for (i = l - 1; i >= 0; i--) {
        printf("%c  ", str[i]); 
    }

    printf("\n");
	
	return 0;
}
