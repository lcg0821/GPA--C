#include<stdio.h>
#include<stdlib.h>
extern void windows();
extern void menu();
extern void init();
extern void print();
struct student 
{
	int   StuID;
	char  name[20];
	float CH,MA,EN;
	float sum;
}stuinfo[100];
int len=0;
int stusum;
int main()
{
	windows();
	menu();
	return 0;
	system("pause");



}