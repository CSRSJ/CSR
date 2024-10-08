#include<stdio.h>
 
int term;
int fibonacci(int prNo, int num);
 
void main() 
{
   static int prNo = 0, num = 1;
	printf("\n Recursion : Print Fibonacci Series :\n");
	
   printf(" Input number of terms for the Series: ");
   scanf("%d", &term);
 printf(" The Series are :\n"); 
   printf(" 1  ");
   fibonacci(prNo, num);
    printf("\n");
}
 
int fibonacci(int prNo, int num) 
{
   static int i = 1;
   int nextNo;
 
   if (i == term)
      return (0);
   else 
   {
      nextNo = prNo + num;
      prNo = num;
      num = nextNo;
      printf("%d  ", nextNo);
 
      i++;
      fibonacci(prNo, num); 
   }
   return (0);
}