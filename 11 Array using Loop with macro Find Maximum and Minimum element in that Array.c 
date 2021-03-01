#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
	int Arr[Size]={};
	int i=0,Max=0,Min=0;
	
	printf("\n Enter Array Elements=\n\n");
	
	for(i=0;i<Size;i++)
	{
		printf("\n Enter Element[%d]=",i+101);
		scanf("%d",&Arr[i]);
	}
	
	for(i=0;i<Size;i++)
	{
		printf("\n Value of Element %d=%d",i+101,Arr[i]);
	}
	
	printf("\n\n Press any key to continue...");
	
	getch();
	system("cls");
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==0)
		{
			Max=Arr[i];
			Min=Arr[i];
			continue;
		}
		
		if(Arr[i]>Max)
		{
			Max=Arr[i];
		}
		
		if(Arr[i]<Min)
		{
			Min=Arr[i];
		}
	}
	
	printf("\n Maximum element in given array is %d",Max);
	
	printf("\n Minimum element in given array is %d",Min);
	
	printf("\n\n Thanks!!");
	
	getch();
	return 0;
}