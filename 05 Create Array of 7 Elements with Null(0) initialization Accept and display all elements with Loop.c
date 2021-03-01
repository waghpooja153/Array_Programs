#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int Arr[7]={};
	int i=0;
	printf("\n Enter Array Elements=\n\n");
	
	for(i=0;i<7;i++)
	{
		printf("\n Enter Element[%d]=",i+101);
		scanf("%d",&Arr[i]);
	}
	getch();
	system("cls");
	
	for(i=0;i<7;i++)
	{
		printf("\n Value of RollNo %d=%d",i+101,Arr[i]);
	}
	
	printf("\n Press Any Key To Continue...");
	getch();
	return 0;
}