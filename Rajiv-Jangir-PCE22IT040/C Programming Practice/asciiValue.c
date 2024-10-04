#include<stdio.h>

int main()
{
    char ascii;

    for(int i = 0;i<255;i++){
        ascii = i;
        printf(" %c ",ascii);
    }
}