#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
	int Arr[Size]={};
	int i=0;
	int Src_Ele=0;
	
	printf("\n Enter Array Elements=\n\n");
	
	for(i=0;i<Size;i++)
	{
		printf("\n Enter Element[%d]=",i+101);
		scanf("%d",&Arr[i]);
	}
	
	for(i=0;i<Size;i++)
	{
		printf("\n Value of RollNo %d=%d",i+501,Arr[i]);
	}
	
	system("cls");
	
	printf("\n Enter Element to Search in Array=");
	scanf("%d",&Src_Ele);
	
	if(0)
	{
		printf("\n Number Found");
	}
	else
	{
		printf("\n Number Not Found");
	}
	
	printf("\n\n Thanks!!");
	
	getch();
	return 0;
}