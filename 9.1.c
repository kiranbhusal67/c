#include<stdio.h>
struct std{
int rollno;
char name[50];
char add[100];
int age;
float phy;
float c;
float math;
 };
 int main() {
struct std std;
float avg;
printf("Enter the roll number: ");
scanf("%d", &std.rollno);
printf("Enter name: ");
scanf("%s", std.name);
printf("Enter address: ");
scanf("%s", std.add);
printf("Enter age: ");
scanf("%d", &std.age);
printf("Enter marks in Physics: ");
scanf("%f", &std.phy);
printf("Enter marks in C Programming: ");
scanf("%f", &std.c);
printf("Enter marks in Math: ");
scanf("%f", &std.math);

avg = (std.phy + std.c + std.math) / 3;

printf("\nStudent Details:\n");
printf("Roll Number: %d\n", std.rollno);
printf("Name: %s\n", std.name);
printf("Address: %s\n", std.add);
printf("Age: %d\n", std.age);
printf("Marks in Physics: %.2f\n", std.phy);
printf("Marks in C Programming: %.2f\n", std.c);
printf("Marks in Math: %.2f\n", std.math);
printf("Average Marks: %.2f\n", avg);

return 0;

 }
