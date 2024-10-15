#include <stdio.h>
#include <string.h>

struct Marks {
int science;
int math;
int language;
};

struct Student {
	char name[40]; 
int id_number;	
struct Marks marks;  
} student;

int main() {

  student.marks.science =72;
  student.marks.math = 75;
  student.marks.language = 89;

strcpy(student.name, "Rajiv Jangir");
  student.id_number = 123;

printf("Student details:\n");
printf("\nName: %s", student.name);
printf("\nStudent ID: %d", student.id_number);
printf("\nMarks in Science: %d", student.marks.science);
printf("\nMarks in Math: %d", student.marks.math);
printf("\nMarks in Language: %d", student.marks.language);
return 0;
}
